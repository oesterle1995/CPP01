/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 19:20:19 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/06 20:27:51 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{ 
    private:
        // typedef struct t_debug
        // { 
        //     std::string level[4];
        //     void (*f)(void)[4];
        // }
        void debug();
        void info();
        void warning();
        void error();
    public:
        void complain(std::string level);
    


};

#endif