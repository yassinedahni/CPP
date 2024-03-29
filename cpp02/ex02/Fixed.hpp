/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:04 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/18 21:23:34 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private :
        float   fp;
        static const int fract = 8;
    public :
        float   toFloat() const;
        int     toInt() const;
        Fixed   &operator = (const Fixed &object);
        Fixed   &operator  ++();
        Fixed   operator  ++(int);
        Fixed   &operator  --();
        Fixed   operator  --(int);
        Fixed   operator  *(const Fixed &f);
        Fixed   operator  /(const Fixed &f);
        Fixed   operator  +(const Fixed &f);
        Fixed   operator  -(const Fixed &f);
        bool    operator  >(const Fixed &f) const;
        bool    operator  <(const Fixed &f) const;
        bool    operator  >=(const Fixed &f) const;
        bool    operator  <=(const Fixed &f) const;
        bool    operator  ==(const Fixed &f) const;
        bool    operator  !=(const Fixed &f) const;
        static const  Fixed &min(const Fixed &f1, const Fixed &f2);
        static const  Fixed &max(const Fixed &f1, const Fixed &f2);
        static Fixed &min(Fixed &f1, Fixed &f2);
        static Fixed &max(Fixed &f1, Fixed &f2);
        Fixed();
        Fixed(Fixed const &a);
        Fixed(const int a);
        Fixed(const float a);
        ~Fixed();
};

std::ostream &operator << (std::ostream &out, const Fixed &f);

#endif