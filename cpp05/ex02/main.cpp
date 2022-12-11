/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:44:28 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:58:00 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat a("yassine", 2);
        std::cout << a << std::endl << std::endl;

        ShrubberyCreationForm b("1");
        std::cout << b << std::endl << std::endl;
        b.beSigned(a);
        a.executeForm(b);
    
        RobotomyRequestForm c("2");
        std::cout << c << std::endl << std::endl;
        c.beSigned(a);
        a.executeForm(c);
        
        PresidentialPardonForm d("3");
        std::cout << d << std::endl << std::endl;
        d.beSigned(a);
        a.executeForm(d);
    
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}