/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:33:31 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/28 18:43:47 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->n = 0;
}

Span::Span(const Span &s)
{
    this->integer = s.integer;
    this->n = s.n;
}

Span::~Span()
{
    
}

Span &Span::operator=(const Span &s)
{
    this->integer = s.integer;
    this->n = s.n;
    return (*this);
}

Span::Span(unsigned int i)
{
    this->n = i;
}

void Span::addNumber(const int i)
{
    if (this->integer.size() >= this->n)
        throw OutOfRange();
    else
        this->integer.push_back(i);
}

const char *Span::OutOfRange::what() const throw()
{
    return ("Out Of Range");
}

const char *Span::NoSpanCanBeFound::what() const throw()
{
    return ("Out Of Range");
}

int Span::shortestSpan() const
{
    if (this->integer.size() <= 1)
        throw NoSpanCanBeFound();
    std::list<int> in = this->integer;
    in.sort();
    std::list<int>::const_iterator i1= in.begin();
    std::list<int>::const_iterator i2= in.begin();
    i2++;
    int r1 = *i1;
    int r2 = *i2;
    int r = r2 - r1;
    i1++;
    for (; i1 != in.end(); i1++)
    {
        i2++;
        if (i2 != in.end())
        {
            r1 = *i1;
            r2 = *i2;
            if (r > (r2 - r1))
            {
                r = r2 - r1;
            }
        }
    }
    return (r);
}



int Span::longestSpan() const
{
    if (this->integer.size() <= 1)
        throw NoSpanCanBeFound();
    std::list<int> in = this->integer;
    in.sort();
    std::list<int>::const_iterator i1 = in.begin();
    std::list<int>::const_iterator i2 = in.end();
    i2--;
    int r = *i2 - *i1;
    return (r);
}

void Span::addNumber(std::list<int>::iterator a, std::list<int>::iterator b)
{
    while (a != b)
    {
        this->addNumber(*a);
        a++;
    }
}