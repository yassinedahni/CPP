/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:09 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/17 21:15:32 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator = (const Fixed &object)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fp = object.fp;
    return (*this);
}

std::ostream &operator << (std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return (out);
}

Fixed::Fixed() : fp(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called" << std::endl;
    this->fp = a << this->fract;
}

Fixed::Fixed(const float a)
{
    std::cout << "Float constructor called" << std::endl;
    this->fp = roundf(a * (pow(2, this->fract)));
}

float Fixed::toFloat() const
{
    float r = this->fp / (pow(2, this->fract));
    return (r);
}

int Fixed::toInt() const
{
    int r = this->fp / (1 << this->fract);
    return (r);
}

Fixed::Fixed(Fixed const &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}