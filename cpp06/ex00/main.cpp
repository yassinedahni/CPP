/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:42:24 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/19 18:44:12 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
        conversion(av[1]);
    else
        std::cout << "Please Enter 2 Parameters" << std::endl;
}