/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:40:29 by ydahni            #+#    #+#             */
/*   Updated: 2022/11/25 18:56:20 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("yassine");
    
    a.attack("1337");
    a.takeDamage(100);
    a.beRepaired(0);
    a.highFivesGuys();
    a.attack("evaluators");
    a.takeDamage(10);
    a.beRepaired(10);
    a.highFivesGuys();
    a.attack("evaluators");
    a.takeDamage (50);
}