/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:09:51 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 20:29:10 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : my_weap(NULL), my_name(name)
{ 
    return;
}

void HumanB::attack()
{
    std::cout << this->my_name << ": attacks with their ";
    if(this->my_weap == NULL)
        std::cout << "... oops no arms find";
    else
        std::cout << this->my_weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->my_weap = &weapon;
}