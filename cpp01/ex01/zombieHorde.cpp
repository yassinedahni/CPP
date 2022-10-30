/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:09:32 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/26 20:09:00 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int number, std::string name)
{
    Zombie *n;

    if (number < 0)
        return (NULL);
    n = new Zombie[number];
    for (int i = 0; i < number; i++)
    {
        n[i].SetName(name);
        n[i].Announce();
    }
    return (n);
}