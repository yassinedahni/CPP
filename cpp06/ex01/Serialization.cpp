/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:17:18 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/18 21:23:03 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t r = reinterpret_cast<uintptr_t>(ptr);
    return (r);
}

Data* deserialize(uintptr_t raw)
{
    Data *r = reinterpret_cast<Data *>(raw);
    return (r);   
}