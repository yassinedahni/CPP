/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:25:01 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/25 15:48:14 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if(islower(av[i][j]))
                av[i][j] = toupper(av[i][j]);
            j++;
        }
        i++;
    }
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (av[i])
        {
            std::cout << av[i];
            i++;
        }
        std::cout << std::endl;
    }
}