/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:21:20 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/30 18:38:06 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Brain *B;
    public :
        Dog();
        Dog(const Dog &d);
        Dog &operator=(const Dog &d);
        ~Dog();
        void makeSound() const;
        const std::string &getType() const;
};

#endif