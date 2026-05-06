/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:49:30 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/06 12:13:04 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
    return(this->type);
}

void Weapon::setType(const std::string& value)
{ 
    this->type = value;
}

Weapon::Weapon(const std::string &choice) : type(choice)
{ 
    return;
}

Weapon::Weapon()
{
    return;   
}