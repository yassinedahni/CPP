/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:32:59 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/27 23:07:24 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <list>

class Span
{
    private :
        std::list<int> integer;
        unsigned int n;
    public :
        Span();
        ~Span();
        Span(const Span &s);
        Span &operator=(const Span &s);
        Span(unsigned int i);
        void addNumber(const int i);
        int shortestSpan() const ;
        int longestSpan() const;
        void addNumber(std::list<int>::iterator a, std::list<int>::iterator b);
    class OutOfRange : public std::exception
    {
        const char * what() const throw();
    };
    class NoSpanCanBeFound : public std::exception
    {
        const char * what() const throw();
    };
};


#endif