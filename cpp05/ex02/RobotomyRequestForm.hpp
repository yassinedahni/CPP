/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:36:39 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/08 22:34:05 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include <iostream>


class RobotomyRequestForm : public Form
{
    private:
        int count;
        std::string target;
    public:
        void message() const;
        void execute(Bureaucrat const & executor) const;
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &r);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &r);
        ~RobotomyRequestForm();
};

#endif