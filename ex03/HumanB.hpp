/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:05:35 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 19:41:13 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{ 
    private:
        Weapon *my_weap;
        std::string my_name;
    public:
        void attack();
        HumanB(std::string& name);
        void setWeapon(Weapon& my_weap);
    
};

#endif