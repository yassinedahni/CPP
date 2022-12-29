/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:28:06 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/23 19:20:37 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int *a = new int[2]();
    a[0] = 1;
    a[1] = 2;
    iter(a, 2, print);

    char *s = new char[2]();
    s[0] = 'o';
    s[1] = 'k';
    iter(s, 2, print);

    delete []s;
    delete []a;
    
}