/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:04 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/25 17:37:45 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    protected :
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamge;
    public :
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap & operator = (const ClapTrap &a);
        ClapTrap();
        ClapTrap(const std::string Name);
        ClapTrap(const ClapTrap &a);
        ~ClapTrap();
};

#endif