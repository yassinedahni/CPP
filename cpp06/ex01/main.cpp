/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:17:39 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/18 21:31:57 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data *a = new Data;
    a->a = 1;
    std::cout << a->a << std::endl;
    a->b = 1;
    std::cout << a->b << std::endl;
    a->c = '1';
    std::cout << a->c << std::endl;
    a->d = 1;
    std::cout << a->d << std::endl;

    std::cout << std::endl; 

    uintptr_t r = serialize(a);

    Data *b = new Data;

    b->a = 2;
    std::cout << b->a << std::endl;
    b->b = 2;
    std::cout << b->b << std::endl;
    b->c = '2';
    std::cout << b->c << std::endl;
    b->d = 2;
    std::cout << b->d << std::endl;
    std::cout << std::endl;

    delete(b);
    b = deserialize(r);

    std::cout << b->a << std::endl;
    std::cout << b->b << std::endl;
    std::cout << b->c << std::endl;
    std::cout << b->d << std::endl;
    delete(a);
}