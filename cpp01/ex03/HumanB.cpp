/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:55:01 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/28 18:45:40 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon &club)
{
    this->b = &club;
}

void HumanB::attack()
{
    if (this->b != NULL)
        std::cout << this->name << " attacks with their " << this->b->GetType() << std::endl;
    else
    {
        std::cout << "Weapon not found !!" << std::endl;
    }
}


HumanB::HumanB(std::string name) : name(name)
{
    this->b = NULL;
}

