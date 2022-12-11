/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:15:01 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:00:18 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H


#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int gradeSign;
        const int gradeExecute;
    public:
        std::string getName() const;
        bool getSign() const;
        int getGradeSign() const;
        int getGradeExecute() const;
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
        class NotExecuteException : public std::exception
        {
            public :
                virtual const char* what() const throw();
            
        };
        class InternException : public std::exception
        {
            public :
                virtual const char* what() const throw();
            
        };
        void beSigned(const Bureaucrat &b);
        Form(std::string name, int gradeSign, int gradeExecute);
        Form();
        Form(const Form &f);
        Form &operator=(const Form &f);
        virtual ~Form();
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &cout, const Form &f);

#endif