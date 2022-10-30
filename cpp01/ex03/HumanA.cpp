/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:54:54 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/28 20:28:26 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->a.GetType() << std::endl;
}


HumanA::HumanA(std::string name, Weapon &club) : a(club)
{
    this->name = name;
}
