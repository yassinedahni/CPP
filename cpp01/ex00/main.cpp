/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:19:05 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/28 18:33:48 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *n;

    RandomChump("Zombie in stack");
    n = NewZombie("Zombie in heap ");
    n->Announce();
    delete(n);
}