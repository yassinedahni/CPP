/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:36:30 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/27 22:49:08 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void    (Harl::*f[4])();

void Harl::complain(std::string level)
{
    f[0] = &Harl::debug;
    f[1] = &Harl::info;
    f[2] = &Harl::warning;
    f[3] = &Harl::error;

    std::string l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    int x = 0;
    while (i < 4 && level != l[i])
        i++;
    x = i;
    switch (i)
    {
        case 0:
            std::cout << "[ " << l[x] << " ]" << std::endl;
            x++;
            (this->*f[0])();
        case 1:
            std::cout << "[ " << l[x] << " ]" << std::endl;
            x++;
            (this->*f[1])();
        case 2:
            std::cout << "[ " << l[x] << " ]" << std::endl;
            x++;
            (this->*f[2])();
        case 3:
            std::cout << "[ " << l[x] << " ]" << std::endl;
            (this->*f[3])();
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
