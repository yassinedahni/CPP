/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:48:41 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/29 23:10:16 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat &c);
        Cat &operator=(const Cat &c);
        ~Cat();
        std::string getType() const;
        void makeSound() const;
};


#endif