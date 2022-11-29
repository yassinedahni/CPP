/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:40:29 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/25 18:49:22 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    ScavTrap a("yassine");
    a.attack("1337");
    a.takeDamage(100);
    a.beRepaired(0);
    a.guardGate();
    a.attack("evaluators");
    a.takeDamage(10);
    a.beRepaired(0);
    a.guardGate();
}