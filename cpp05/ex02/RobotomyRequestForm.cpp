/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:39:04 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:27:53 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "[ RobotomyRequestForm ]: Default constructor called" << std::endl;
    this->target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "[ RobotomyRequestForm ]: Destructor called" << std::endl;
   
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "[ RobotomyRequestForm ]: Copy constructor called" << std::endl;
    this->target = r.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
    std::cout << "[ RobotomyRequestForm ]: Copy assignment operator called" << std::endl;
    this->target = r.target;
    return (*this);
}

void RobotomyRequestForm::message() const 
{
    if (time(NULL) % 2 == 0)
    {
        std::cout << "[ RobotomyRequestForm ]: " << this->target << " has been robotomized successfully" << std::endl;
    }
    else
        std::cout << "[ RobotomyRequestForm ]: the robotomy failed" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getSign() == 1 && executor.getGrade() <= this->getGradeExecute())
        message();
    else
        throw NotExecuteException();
}