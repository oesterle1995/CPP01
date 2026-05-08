/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:20:19 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/08 18:54:11 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{ 
    private:
        typedef void(Harl::*ptr_ft)(void);
        typedef struct t_err
        { 
            std::string level;
            ptr_ft      f;
        }t_msg;
        t_err err[4];
        void debug();
        void info();
        void warning();
        void error();
    public:
        void complain(std::string level);
        Harl();
    


};

#endif