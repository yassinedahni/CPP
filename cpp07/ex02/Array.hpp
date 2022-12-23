/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:34:42 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/23 19:16:07 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template<typename A>
class Array
{
    private:
        A *array;
        unsigned int n;
    public:
        Array();
        Array(const Array &a);
        Array &operator=(const Array &a);
        A &operator[](unsigned int n) const;
        Array(unsigned int n);
        ~Array();
        class IndexException : public std::exception
        {
            public :
                const char * what() const throw();
        };
        unsigned int size() const;
};

template<typename A>
Array<A>::Array()
{
    this->array = nullptr;
    this->n = 0;
}

template<typename A>
Array<A>::Array(const Array &a)
{
    this->n = a.n;
    this->array = new A[n]();
    unsigned int i = 0;
    while (i < n)
    {
        this->array[i] = a.array[i];
        i++;
    }
}

template<typename A>
Array<A>::Array(unsigned int n)
{
    this->n = n;
    this->array = new A[n]();
}

template <typename A>
Array<A>::~Array()
{
    delete []array;
}

template<typename A>
Array<A> &Array<A>::operator=(const Array &a)
{
    this->n = a.n;
    delete []array;
    this->array = new A[n]();
    unsigned int i = 0;
    while (i < n)
    {
        this->array[i] = a.array[i];
        i++;
    }
    return (*this);
}

template <typename A>
A &Array<A>::operator[](unsigned int n) const
{
    if (n >= this->n)
        throw IndexException();
    return (array[n]);
}

template <typename A>
unsigned int Array<A>::size() const
{
    return (this->n);
}

template <typename A>
const char *Array<A>::IndexException::what() const throw()
{
    return ("index is out of bounds");
}

#endif