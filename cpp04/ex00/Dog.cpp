/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:24:11 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/29 23:18:09 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "{DOG} Default Constructor Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &d)
{
    std::cout << "{Animal} Copy Constructor Called" << std::endl;
    this->type = d.type;
}

Dog::~Dog()
{
    std::cout << "{DOG} destructor Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &d)
{
    std::cout << "{DOG} Assignment operator Called" << std::endl;
    this->type = d.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "{DOG} hau hau" << std::endl;
}

std::string Dog::getType() const 
{
    return (this->type);
}