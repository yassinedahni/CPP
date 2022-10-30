/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:18:58 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/28 18:32:46 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::Announce()
{
    std::cout << this->name <<" BraiiiiiiinnnzzzZ..." << std::endl;
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