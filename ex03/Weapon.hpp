/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoesterl <aoesterl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:42:14 by aoesterl          #+#    #+#             */
/*   Updated: 2026/05/06 14:49:13 by aoesterl         ###   ########.fr       */
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
        void setType(const std::string& type);
        Weapon();
        Weapon(const std::string &type);
};

#endif