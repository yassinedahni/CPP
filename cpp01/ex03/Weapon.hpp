/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:51:39 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/31 00:04:58 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public :
        const std::string &GetType() const;
        void    setType(std::string type);
        Weapon(std::string name);
};


#endif