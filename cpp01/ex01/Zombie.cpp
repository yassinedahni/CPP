/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:10:31 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/25 22:14:22 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::Announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    
}

Zombie::Zombie(std::string name) 
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is dead" << std::endl;
}