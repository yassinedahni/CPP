/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:18:55 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/25 22:27:25 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
    private :
        std::string name;
    public :
        void    SetName(std::string name);
        std::string GetName() const;
        void Announce();
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};

Zombie* zombieHorde(int number, std::string name);

#endif