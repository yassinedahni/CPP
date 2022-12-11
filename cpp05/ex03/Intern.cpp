/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:51 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:06:49 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "[ Intern ]: Default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "[ Intern ]: Destructor called" << std::endl;
}

Intern::Intern(const Intern &i)
{
    std::cout << "[ Intern ]: Copy constructor called" << std::endl;
    (void)i;

}

Intern &Intern::operator=(const Intern &i)
{
    std::cout << "[ Intern ]: Copy assignment operator called" << std::endl;
    (void)i;
    return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
    Form *p[3];

    while (name.find("robotomy request", 0, 16) == 0)
    {
        p[0] = new RobotomyRequestForm(target);
        std::cout << "[ Intern ]: Intern creates " << name << std::endl;
        return (p[0]);
    }
    while (name.find("presidential pardon", 0, 19) == 0)
    {
        p[1] = new PresidentialPardonForm(target);
        std::cout << "[ Intern ]: Intern creates " << name << std::endl;
        return (p[1]);
    }
    while (name.find("shrubbery creation", 0, 18) == 0)
    {
        p[2] = new ShrubberyCreationForm(target);
        std::cout << "[ Intern ]: Intern creates " << name << std::endl;
        return (p[2]);
    }
    throw Form::InternException();
    return (NULL);
}