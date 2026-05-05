/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:53:24 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 16:26:25 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>


class Zombie
{
    private: 
        std::string name;
    public:
        void announce();
        Zombie();
        Zombie(std::string& new_name);
        ~Zombie();
       void set_name(std::string& name);
};

void randomChump( std::string name );
Zombie *newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name);


#endif