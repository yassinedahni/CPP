/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:28:30 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/30 18:51:07 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const Animal *arry[6];

    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
            arry[i] = new Dog();
        else
            arry[i] = new Cat();
            
    }
    for (int i = 0; i < 6; i++)
    {
        arry[i]->makeSound();
    }

    for (int i = 0; i < 6; i++)
    {
        delete arry[i];
    }

    Dog cat;
    {
        Dog obj;
        cat = obj;
    }
    delete j;
    delete i;
}