/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:10:51 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/28 18:36:47 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::SetName(std::string name)
{
    this->name = name;
}


std::string Zombie::GetName() const
{
    return (this->name);
}

int main()
{
    Zombie *n;

    n = zombieHorde(2, "Zombie");
    delete [] n;
}