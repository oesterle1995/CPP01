/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:20:17 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/06 20:31:37 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout <<  "debug message" << std::endl;
}


void Harl::info()
{
     std::cout <<  "info message" << std::endl;
}

void Harl::warning()
{
     std::cout <<  "warning message" << std::endl;
}


void Harl::error()
{
     std::cout <<  "error message" << std::endl;
}

void Harl::complain(std::string level)
{ 
    void (Harl::*ft[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    { 
        if(levels[i] == level)
            (this->*ft[i])();
    }
}