/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:39:38 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/27 18:52:15 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"

int main()
{
    {
        std::vector<char> a;
        a.push_back('a');
        a.push_back('b');
        a.push_back('c');
        a.push_back('d');
        easyfind(a, 'a');
    }
    {
        std::list<int> a;
        a.push_front(1);
        a.push_back(2);
        a.push_front(3);
        a.push_back(4);
        easyfind(a, 5);
    }
}