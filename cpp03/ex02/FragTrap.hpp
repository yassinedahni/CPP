/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:28:04 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/25 18:16:14 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        void attack(const std::string& target);
        void highFivesGuys();
        FragTrap & operator = (const FragTrap &a);
        FragTrap();
        FragTrap(const std::string Name);
        FragTrap(const FragTrap &a);
        ~FragTrap();
};


#endif