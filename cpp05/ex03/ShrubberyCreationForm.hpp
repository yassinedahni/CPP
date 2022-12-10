/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:12:44 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/08 20:42:48 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        void ascii_tree() const;
        void execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &s);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &s);
        ~ShrubberyCreationForm();
};



#endif