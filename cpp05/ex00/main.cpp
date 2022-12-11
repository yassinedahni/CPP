/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:44:28 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:39:09 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat a("yassine", 40);
        std::cout << a << std::endl;
        a.decrement();
        std::cout << a << std::endl;
        a.increment();
        std::cout << a << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}