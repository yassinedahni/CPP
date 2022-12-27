/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:34:26 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/27 18:52:11 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <iterator>
#include <vector>
#include <list>

template <typename F>
void easyfind(F f, int i)
{
    typename F::iterator a = std::find(f.begin(), f.end(), i);
    if (a != f.end())
    {
        std::cout << "found" << std::endl;
    }
    else
        std::cout << "Not Found" << std::endl;
}


#endif