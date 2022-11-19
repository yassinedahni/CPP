/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:29:09 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/18 21:27:35 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

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

Fixed    &Fixed::operator  ++()
{
    this->fp++;
    return (*this);   
}

Fixed    Fixed::operator  ++(int)
{
    Fixed r;

    r = *this;

    this->fp++;
    return (r);   
}

Fixed    &Fixed::operator --()
{
    this->fp--;
    return (*this);   
}

Fixed    Fixed::operator --(int)
{
    Fixed r;

    r = *this;

    this->fp--;
    return (r);   
}

Fixed Fixed::operator  *(const Fixed &f)
{
    float r;

    r = this->toFloat() * f.toFloat();
    r = r * (1 << this->fract);
    this->fp = r;
    return (*this);
}

Fixed Fixed::operator  /(const Fixed &f)
{
    float r;

    r = this->toFloat() / f.toFloat();
    r = r * (1 << this->fract);
    this->fp = r;
    return (*this);
}

Fixed Fixed::operator  +(const Fixed &f)
{
    this->fp = this->fp + f.fp;
    return (*this);
}

Fixed Fixed::operator  -(const Fixed &f)
{
    this->fp = this->fp - f.fp;
    return (*this);
}

bool Fixed::operator  >(const Fixed &f) const
{
    if (this->fp > f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  <(const Fixed &f) const
{
    if (this->fp < f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  >=(const Fixed &f) const
{
    if (this->fp >= f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  <=(const Fixed &f) const
{
    if (this->fp <= f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  ==(const Fixed &f) const
{
    if (this->fp == f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  !=(const Fixed &f) const
{
    if (this->fp != f.fp)
        return (true);
    return (false);
}
