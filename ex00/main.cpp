/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:51:45 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 15:31:05 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{ 
    randomChump("arthur");
    Zombie *zombie;
    zombie = newZombie("john");
    zombie->announce();
    delete(zombie);
}