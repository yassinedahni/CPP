/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:17:42 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/29 23:18:24 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "{WrongAnimal} Default Constructor Called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa)
{
    std::cout << "{WrongAnimal} Copy Constructor Called" << std::endl;
    this->type = wa.type;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "{WrongAnimal} destructor Constructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wa)
{
    std::cout << "{WrongAnimal} Assignment operator Called" << std::endl;
    this->type = wa.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "{WrongAnimal} Animal have not sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}