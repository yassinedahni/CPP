/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:55:11 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/31 00:05:03 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::GetType() const
{
    return (this->type);   
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::Weapon(std::string name) : type(name)
{
    
}