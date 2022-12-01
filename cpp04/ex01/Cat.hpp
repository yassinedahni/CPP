/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:48:41 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/30 00:37:23 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private :
        Brain *B;
    public :
        Cat();
        Cat(const Cat &c);
        Cat &operator=(const Cat &c);
        ~Cat();
        const std::string &getType() const;
        void makeSound() const;
};


#endif