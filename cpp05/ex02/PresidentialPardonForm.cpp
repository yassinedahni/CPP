/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:06:27 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:29:29 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "[ PresidentialPardonForm ]: Default constructor called" << std::endl;
    this->target = "";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "[ PresidentialPardonForm ]: Destructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "[ PresidentialPardonForm ]: Copy constructor called" << std::endl;
    this->target = p.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
    std::cout << "[ PresidentialPardonForm ]: Copy assignment operator called" << std::endl;
    this->target = p.target;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25,5)
{
    this->target = target;
}

void PresidentialPardonForm::message() const
{
    std::cout << "[ PresidentialPardonForm ]: " << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == 1 && executor.getGrade() <= this->getGradeExecute())
        message();
    else
        throw NotExecuteException();
}