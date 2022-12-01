/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:10:01 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/29 23:18:42 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "{WrongCat} Default Constructor Called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "{WrongCat} destructor Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wc)
{
    std::cout << "{WrongCat} Copy Constructor Called" << std::endl;
    this->type = wc.type;
}

WrongCat &WrongCat::operator=(const WrongCat &wc)
{
    std::cout << "{WrongCat} Assignment operator Called" << std::endl;
    this->type = wc.type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "{WrongCat} meowww" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this->type);
}