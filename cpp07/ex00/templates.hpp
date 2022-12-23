/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:15:52 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/23 18:13:36 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <iostream>

template<typename s>
void swap(s &a, s &b)
{
    s t;
    
    t = a;
    a = b;
    b = t;
}

template<typename s>
s min(s a, s b)
{
    if (a < b)
        return (a);
    return (b);
}

template<typename s>
s max(s a, s b)
{
    if (a > b)
        return (a);
    return (b);
}


#endif