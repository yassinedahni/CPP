/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:16:41 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/30 18:53:04 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "{CAT} Default Constructor Called" << std::endl;
    this->type = "Cat";
    this->B = new Brain();
    this->B->setIdeas("Ideas of Cat");
}

Cat::Cat(const Cat &c) : B(NULL)
{
    std::cout << "{CAT} Copy Constructor Called" << std::endl;
    *this = c;
}

Cat &Cat::operator=(const Cat &c)
{
    std::cout << "{CAT} Assignment operator Called" << std::endl;
    if(B != NULL)
        delete this->B;
    this->B = new Brain();
    *(this->B) = *(c.B);
    this->type = c.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "{CAT} destructor Constructor Called" << std::endl;
    delete this->B;
}

void    Cat::makeSound() const 
{
    std::cout << "{CAT} meowww" << std::endl;
}

const std::string &Cat::getType() const
{
    return (this->type);
}