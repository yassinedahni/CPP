/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:16:20 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/18 21:20:15 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <iostream>

struct Data
{
    int a;
    int b;
    char c;
    int d;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif