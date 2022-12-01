/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 23:36:44 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/30 00:33:03 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "{Brain} Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain &b)
{
    std::cout << "{Brain} Copy Constructor Called" << std::endl;
    *this = b;
}

Brain &Brain::operator=(const Brain &b)
{
    std::cout << "{Brain} Assignment operator Called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = b.ideas[i];
    return (*this);
}


void Brain::setIdeas(const std::string &ideas)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ideas;
}

const std::string &Brain::getIdeas(int i) const
{
    return (this->ideas[i]);
}

Brain::~Brain()
{
    std::cout << "{Brain} destructor Constructor Called" << std::endl;
}