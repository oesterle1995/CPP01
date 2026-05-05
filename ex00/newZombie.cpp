/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:53:32 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 15:03:50 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{ 
    Zombie* new_zombie;
    new_zombie = new Zombie(name);
    if(!new_zombie)
        return(NULL);
    return(new_zombie);
}