/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:45:39 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:27:11 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
    std::cout << "[ Bureaucrat ]: Default constructor called" << std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : name(b.name)
{
    std::cout << "[ Bureaucrat ]: Copy constructor called" << std::endl;
    this->grade = b.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    std::cout << "[ Bureaucrat ]: Copy assignment operator called" << std::endl;
    this->grade = b.grade;
    return (*this);
}

std::ostream &operator<<(std::ostream &cout, const Bureaucrat &b)
{
    cout << "[ Bureaucrat ]: ";
    cout << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return (cout);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "[ Bureaucrat ]: Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "[ Bureaucrat ]: constructor called" << std::endl;
    this->grade = grade;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::decrement()
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::increment()
{
    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("[ Bureaucrat ]: Grade Too Low Exception");   
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("[ Bureaucrat ]: Grade Too High Exception");
}

void Bureaucrat::signForm(Form &f)
{
    if (f.getSign() == 1)
    {
        std::cout << "[ Bureaucrat ]: ";
        std::cout << this->name << " signed " << f.getName() << std::endl;
    }
    else
    {
        std::cout << "[ Bureaucrat ]: ";
        std::cout << this->name << " couldn’t sign ";
        std::cout << f.getName() << " because his not signed" << std::endl;
    }
}