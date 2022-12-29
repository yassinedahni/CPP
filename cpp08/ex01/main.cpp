/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:32:42 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/28 18:43:44 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span a(10);

    a.addNumber(6);
    a.addNumber(3);
    a.addNumber(17);
    a.addNumber(9);
    a.addNumber(11);

    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;


    std::list<int> v(5, 100);

    a.addNumber(v.begin(), v.end());


    std::cout << std::endl;
    std::cout << a.shortestSpan() << std::endl;
    std::cout << a.longestSpan() << std::endl;
}