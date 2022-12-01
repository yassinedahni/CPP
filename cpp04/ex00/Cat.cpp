/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:16:41 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/29 23:17:59 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "{CAT} Default Constructor Called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &c)
{
    std::cout << "{CAT} Copy Constructor Called" << std::endl;
    this->type = c.type;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "{CAT} Assignment operator Called" << std::endl;
    this->type = c.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "{CAT} destructor Constructor Called" << std::endl;
}

void    Cat::makeSound() const 
{
    std::cout << "{CAT} meowww" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}