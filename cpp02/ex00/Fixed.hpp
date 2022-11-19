/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:04 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/18 21:36:41 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private :
        int fp;
        static const int fract = 8;
    public :
        void setRawBits(int const raw);
        int  getRawBits() const;
        Fixed &operator = (const Fixed &object);
        Fixed();
        Fixed(const Fixed &a);
        ~Fixed();
};

#endif