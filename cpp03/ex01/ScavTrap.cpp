/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:09 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/25 17:37:45 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "[ ScavTrap ]: Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ ScavTrap ]: Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string Name) : ClapTrap(Name)
{
    std::cout << "[ ScavTrap ]: constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a)
{
    std::cout << "[ ScavTrap ]: Copy constructor called" << std::endl;
    *this = a;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &a)
{
    std::cout << "[ ScavTrap ]: Copy assignment operator called" << std::endl;
    this->HitPoints = a.HitPoints;
    this->EnergyPoints = a.EnergyPoints;
    this->AttackDamge = a.AttackDamge;
    return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout << "[ ScavTrap ]: ClapTrap " << this->Name;
        std::cout << " attack " << target;
        std::cout << " causing " << this->AttackDamge << std::endl;
        this->EnergyPoints--;
    }
    else
        std::cout << "[ ScavTrap ]: ClapTrap is dead" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "[ ScavTrap ]: ScavTrap is now in Gate keeper mode." << std::endl;
}
        