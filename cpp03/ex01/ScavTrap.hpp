/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:04 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/25 17:37:45 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        void attack(const std::string& target);
        void guardGate();
        ScavTrap & operator = (const ScavTrap &a);
        ScavTrap();
        ScavTrap(const std::string Name);
        ScavTrap(const ScavTrap &a);
        ~ScavTrap();
};


#endif