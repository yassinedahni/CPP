/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:38:41 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/28 00:52:57 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <list>


template <typename S>
class MutantStack : public std::stack<S>
{
    public :
        typedef typename std::stack<S>::container_type::iterator    iterator;
        MutantStack &operator=(const MutantStack &s);
        MutantStack(const MutantStack &s);
        MutantStack();
        ~MutantStack();
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};

template <typename S>
MutantStack<S> &MutantStack<S>::operator=(const MutantStack &s)
{
    (void)s;
    return (*this);
}

template <typename S>
MutantStack<S>::MutantStack(const MutantStack &s)
{
    (void)s;
}

template <typename S>
MutantStack<S>::MutantStack()
{
    
}

template <typename S>
MutantStack<S>::~MutantStack()
{
    
}


#endif