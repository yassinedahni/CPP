/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 22:51:59 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/18 01:03:36 by ydahni           ###   ########.fr       */
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

Fixed    &Fixed::operator  ++()
{
    this->fp++;
    return (*this);   
}

Fixed    Fixed::operator  ++(int)
{
    Fixed tmp;

    tmp = *this;

    this->fp++;
    return (tmp);   
}

Fixed    &Fixed::operator --()
{
    this->fp--;
    return (*this);   
}

Fixed    Fixed::operator --(int)
{
    Fixed tmp;

    tmp = *this;

    this->fp--;
    return (tmp);   
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

bool Fixed::operator  >(const Fixed &f)
{
    if (this->fp > f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  <(const Fixed &f)
{
    if (this->fp < f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  >=(const Fixed &f)
{
    if (this->fp >= f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  <=(const Fixed &f)
{
    if (this->fp <= f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  ==(const Fixed &f)
{
    if (this->fp == f.fp)
        return (true);
    return (false);
}

bool Fixed::operator  !=(const Fixed &f)
{
    if (this->fp != f.fp)
        return (true);
    return (false);
}
