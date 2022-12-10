/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:51 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/10 00:27:21 by ydahni           ###   ########.fr       */
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
    while (name.find("robotomy request", 0, 16) == 0)
    {
        Form *n = new RobotomyRequestForm(target);
        std::cout << "[ Intern ]: Intern creates " << name << std::endl;
        return (n);
    }
    while (name.find("presidential pardon", 0, 19) == 0)
    {
        Form *n = new PresidentialPardonForm(target);
        std::cout << "[ Intern ]: Intern creates " << name << std::endl;
        return (n);
    }
    while (name.find("shrubbery creation", 0, 18) == 0)
    {
        Form *n = new ShrubberyCreationForm(target);
        std::cout << "[ Intern ]: Intern creates " << name << std::endl;
        return (n);
    }
    throw Form::InternException();
    return (NULL);
}