/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 18:01:20 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/06 12:52:21 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

void HumanA::attack()
{ 
    std::cout << this->my_name << ": attacks with their " << this->my_weap.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, Weapon& weapon) : my_weap(weapon), my_name(name)
{ 
    return;
}