/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:45:47 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/08 17:45:00 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char* what() const throw();
        };
        void signForm(Form &f);
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &b);
        Bureaucrat &operator=(const Bureaucrat &b);
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &cout, const Bureaucrat &b);



#endif