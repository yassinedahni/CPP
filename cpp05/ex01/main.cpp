/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:44:28 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:41:03 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat a("yassine", 90);
        std::cout << a << std::endl;
        Form b("dahni", 20, 120);
        std::cout << b << std::endl;
        a.signForm(b);
        b.beSigned(a);
        a.signForm(b);
        
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}