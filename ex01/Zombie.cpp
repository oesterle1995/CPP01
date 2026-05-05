/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:53:26 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 16:26:22 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() 
{ 
    
    return;    
}

Zombie::Zombie(std::string& new_name) : name(new_name)
{ 
    
    return;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": died" << std::endl;
    return;
}

void Zombie::announce()
{ 
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


void Zombie::set_name(std::string& name)
{ 
    this->name = name;
}