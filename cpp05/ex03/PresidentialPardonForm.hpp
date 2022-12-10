/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:03:38 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/08 23:33:27 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private :
        std::string target;
    public :
        void execute(Bureaucrat const & executor) const;
        void message() const;
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &p);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &p);
        ~PresidentialPardonForm();
    
};




#endif