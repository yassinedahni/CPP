/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:09 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/25 17:37:45 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "[ ClapTrap ]: Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[ ClapTrap ]: Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string Name)
{
    std::cout << "[ ClapTrap ]: constructor called" << std::endl;
    this->Name = Name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamge = 20;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
    std::cout << "[ ClapTrap ]: Copy constructor called" << std::endl;
    *this = a;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &a)
{
    std::cout << "[ ClapTrap ]: Copy assignment operator called" << std::endl;
    this->HitPoints = a.HitPoints;
    this->EnergyPoints = a.EnergyPoints;
    this->AttackDamge = a.AttackDamge;
    return (*this);
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout << "[ ClapTrap ]: ClapTrap " << this->Name;
        std::cout << " attack " << target;
        std::cout << " causing " << this->AttackDamge << std::endl;
        this->EnergyPoints--;
    }
    else
        std::cout << "[ ClapTrap ]: ClapTrap is dead" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout << "[ ClapTrap ]: ClapTrap " << this->Name;
        std::cout << " Take damge " << amount << std::endl;
        this->HitPoints -= amount;
    }
    else
        std::cout << "[ ClapTrap ]: ClapTrap is already dead" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "[ ClapTrap ]: ClapTrap " << this->Name;
    std::cout << " Repaired " << amount << std::endl;
    this->HitPoints += amount;
    this->EnergyPoints--;
}