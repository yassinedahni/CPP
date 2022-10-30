/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:51:39 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/25 23:53:56 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *b;
    public :
        void attack();
        void setWeapon(Weapon &club);
        HumanB(std::string);
};

#endif