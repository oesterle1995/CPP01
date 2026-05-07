/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:20:17 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/07 17:40:01 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout <<  "Debug : " << "I love having extra bacon for my 7XL-double-cheese \
-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}


void Harl::info()
{
     std::cout << "Info : " << "cannot believe adding extra bacon costs more money. \
     You didn't put enough bacon in my burger! If you did, I wouldn't  \
     be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout <<  "Warning : " << "I think I deserve to have some extra bacon for free. I've been \
    coming for years, whereas you started working here just \
    last month." << std::endl;
}


void Harl::error()
{
     std::cout << "Error : " << "his is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    err[0].level = "DEBUG";   err[0].f = &Harl::debug;
    err[1].level = "INFO";   err[1].f = &Harl::info;
    err[2].level = "WARNING";   err[2].f = &Harl::warning;
    err[3].level = "ERROR";   err[3].f = &Harl::error;
}

void Harl::complain(std::string level)
{
    for(int i = 0; i < 4; i++)
    { 
        if(level == this->err[i].level)
            (this->*err[i].f)(); 
    }
}