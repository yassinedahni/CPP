/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 00:26:32 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/19 18:50:02 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base::~Base()
{
    std::cout << "[Base] destructor called" << std::endl;
}

Base * generate(void)
{
    Base *a[3];

    a[0] = new A;
    a[1] = new B;
    a[2] = new C;
    int l = time(NULL) % 3;
    int i = 0;
    while (i < 3)
    {
        if (i != l)
            delete a[i];
        i++;
    }
    return (a[l]);
}

void identify(Base* p)
{
    
    Base *a = dynamic_cast<A *> (p);
    if (a == nullptr)
        std::cout << "bad::cast" << std::endl;
    else
        std::cout << "A" << std::endl;

    Base *b = dynamic_cast<B *> (p);
    if (b == nullptr)
        std::cout << "bad::cast" << std::endl;
    else
        std::cout << "B" << std::endl;

    Base *c = dynamic_cast<C *> (p);
    if (c == nullptr)
        std::cout << "bad::cast" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        Base &a = dynamic_cast<A &> (p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Base &b = dynamic_cast<B &> (p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Base &c = dynamic_cast<C &> (p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}