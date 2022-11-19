/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:09 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/18 21:36:29 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator = (const Fixed &object)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fp = object.getRawBits();
    return (*this);
}


void Fixed::setRawBits(int const raw)
{
    this->fp = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp);
}

Fixed::Fixed() : fp(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}