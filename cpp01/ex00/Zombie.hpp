/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:18:55 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/28 18:32:48 by ydahni           ###   ########.fr       */
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
        void Announce();
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};

Zombie* NewZombie(std::string name);
void RandomChump(std::string name);



#endif