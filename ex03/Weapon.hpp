/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:42:14 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/05 19:41:49 by aoesterl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
    #define WEAPON_HPP
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType() const;
        void SetType(std::string& type);
        
};

#endif