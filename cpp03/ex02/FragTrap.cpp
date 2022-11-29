/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:09 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/25 18:06:09 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "[ FragTrap ]: Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "[ FragTrap ]: Destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string Name) : ClapTrap(Name)
{
    std::cout << "[ FragTrap ]: constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &a)
{
    std::cout << "[ FragTrap ]: Copy constructor called" << std::endl;
    *this = a;
}

FragTrap & FragTrap::operator=(const FragTrap &a)
{
    std::cout << "[ FragTrap ]: Copy assignment operator called" << std::endl;
    this->HitPoints = a.HitPoints;
    this->EnergyPoints = a.EnergyPoints;
    this->AttackDamge = a.AttackDamge;
    return (*this);
}

void    FragTrap::attack(const std::string &target)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        std::cout << "[ FragTrap ]: ClapTrap " << this->Name;
        std::cout << " attack " << target;
        std::cout << " causing " << this->AttackDamge << std::endl;
        this->EnergyPoints--;
    }
    else
        std::cout << "[ FragTrap ]: ClapTrap is dead" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "[ FragTrap ]: high fives" << std::endl;
}
        