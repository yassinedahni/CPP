/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:11:14 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/30 00:05:18 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
    protected :
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &wa);
        WrongAnimal &operator=(const WrongAnimal &wa);
        ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
};



#endif