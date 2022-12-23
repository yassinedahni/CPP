/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:15:52 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/23 18:32:05 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename array>
void print(const array &a)
{
    std::cout << a << std::endl;
}

template<typename array>
void iter(const array *a, unsigned int length, void (*print)(const array&))
{
    unsigned int i = 0;
    while (i < length)
    {
        print(a[i]);
        i++;
    }
}


#endif