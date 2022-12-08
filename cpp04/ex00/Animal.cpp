/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:33:07 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/07 23:45:54 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "{Animal} Default Constructor Called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "{Animal} destructor Constructor Called" << std::endl;
}


Animal::Animal(const Animal &a)
{
    std::cout << "{Animal} Copy Constructor Called" << std::endl;
    this->type = a.type;
}

Animal &Animal::operator=(const Animal &a)
{
    std::cout << "{Animal} Assignment operator Called" << std::endl;
    this->type = a.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "{Animal} Animal have not sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}