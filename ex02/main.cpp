/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:38:48 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 16:09:48 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string msg = "HI THIS IS BRAIN";
    std::string* stringPTR = &msg;
    std::string& stringREF = msg;
    std::cout << "adress of the string : " << &msg << std::endl;
    std::cout << "adress of the string pointer : " << &stringPTR << std::endl;
    std::cout << "adress of the string reference : " << &stringREF << std::endl;
    std::cout << "value of the string : " << msg << std::endl;
    std::cout << "value of the string pointer : " << stringPTR << std::endl;
    std::cout << "value of the string reference : " << stringREF << std::endl;
}