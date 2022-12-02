/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:24:11 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/02 15:25:49 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "{DOG} Default Constructor Called" << std::endl;
    this->type = "Dog";
    this->B = new Brain();
    this->B->setIdeas("ideas of Dog");
}

Dog::Dog(const Dog &d) : B(NULL)
{
    std::cout << "{DOG} Copy Constructor Called" << std::endl;
    *this = d;
}

Dog::~Dog()
{
    std::cout << "{DOG} destructor Constructor Called" << std::endl;
    delete this->B;
}

Dog &Dog::operator=(const Dog &d)
{
    std::cout << "{DOG} Assignment operator Called" << std::endl;
    if(B !=  NULL)
        delete this->B;
    this->B = new Brain();
    *(this->B) = *(d.B);
    this->type = d.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "{DOG} hau hau" << std::endl;
}

const std::string &Dog::getType() const 
{
    return (this->type);
}