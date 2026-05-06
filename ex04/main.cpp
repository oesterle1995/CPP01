/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:11:32 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/06 19:14:37 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#define ERROR 1

void replace(std::string &text, const std::string &s1, const std::string& s2)
{
    if (s1.empty())
        return;
    size_t pos = 0;
    size_t len_s1 = s1.size();
    size_t len_s2 = s2.size();
    
    while (1)
    { 
        pos = text.find(s1, pos);
        if (pos == std::string::npos)
            break;
        text.erase(pos, len_s1);
        text.insert(pos, s2);
        pos += len_s2;
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (ERROR);

    const std::string s1 = argv[2];
    const std::string s2 = argv[3];
    const std::string filename = argv[1];
    const std::string new_file = filename + ".replace";
    
    std::ifstream read_stream(filename.c_str());
    if (!read_stream.is_open())
        return(std::cerr << "Error : file not found" << std::endl, ERROR);
    std::stringstream ss;
    ss << read_stream.rdbuf();
    if (ss.fail() && !ss.eof())
        return(std::cerr << "Error : read file failed" << std::endl,ERROR);
    std::string text = ss.str();
    replace(text, s1, s2);
    std::ofstream write_stream(new_file.c_str());
    if (!write_stream.is_open())
        return(std::cerr << "Error : open " << new_file << std::endl, ERROR);
    write_stream << text;
    return (0);
}