/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:15:45 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:27:46 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""),sign(0), gradeSign(0), gradeExecute(0)
{
    std::cout << "[ Form ]: Default constructor called" << std::endl;
}

Form::Form(const Form &f) : name(f.name), gradeSign(f.gradeSign),gradeExecute(f.gradeExecute)
{
    std::cout << "[ Form ]: Copy constructor called" << std::endl;
    this->sign = f.sign;
}

Form &Form::operator=(const Form &f)
{
    std::cout << "[ Form ]: Copy assignment operator called" << std::endl;
    this->sign = f.sign;
    return (*this);
}

Form::~Form()
{
    std::cout << "[ Form ]: Destructor called" << std::endl;
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSign() const
{
    return (this->sign);
}

int Form::getGradeSign() const
{
    return (this->gradeSign);
}

int Form::getGradeExecute() const
{
    return (this->gradeExecute);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("[ Form ]: Grade Too High Exception");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("[ Form ]: Grade Too Low Exception");
}

std::ostream &operator<<(std::ostream &cout, const Form &f)
{
    cout << "[ Form ]: ";
    cout << "name is ";
    cout << f.getName();
    cout << " boolean signed is ";
    cout << f.getSign();
    cout << " Grade sign is ";
    cout << f.getGradeSign();
    cout << " Grade Execute is ";
    cout << f.getGradeExecute();
    return (cout);
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : name(name), gradeSign(gradeSign),gradeExecute(gradeExecute)
{
    this->sign = 0;
    if (gradeSign < 1 || gradeExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeSign > 150 || gradeExecute > 150)
        throw Form::GradeTooLowException();
    std::cout << "[ Form ]: constructor called" << std::endl;
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() < 1)
        throw Form::GradeTooHighException();
    if (b.getGrade() > 150)
        throw Form::GradeTooLowException();
    this->sign = 1;   
}