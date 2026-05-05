/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:53:24 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 14:58:46 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
    private: 
        std::string name;
    public:
        void announce();
        Zombie();
        Zombie(std::string& new_name);
        ~Zombie();
    
};

void randomChump( std::string name );
Zombie *newZombie(std::string name);


#endif