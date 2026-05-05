/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:51:45 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 16:30:03 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{ 
    Zombie *zombie;
    Zombie *horde;
    randomChump("arthur");
    zombie = newZombie("john");
    zombie->announce();
    delete(zombie);
    horde = zombieHorde(15, "michel");
    if(!horde)
        std::cout << "erreur new" << std::endl;
    for(int i = 0; i < 15; i++)
    { 
        horde[i].announce();
    }
    delete[] horde;
}