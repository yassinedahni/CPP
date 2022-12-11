/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:23:42 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/11 16:28:28 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145,137)
{
    std::cout << "[ ShrubberyCreationForm ]: Default constructor called" << std::endl;
    this->target = "";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "[ ShrubberyCreationForm ]: Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : Form("ShrubberyCreationForm", 145,137)
{
    std::cout << "[ ShrubberyCreationForm ]: Copy constructor called" << std::endl;
    this->target = s.target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145,137)
{
    this->target = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
    std::cout << "[ ShrubberyCreationForm ]: Copy assignment operator called" << std::endl;
    this->target = s.target;
    return (*this);
}

void ShrubberyCreationForm::ascii_tree() const
{
    std::string n = this->target + "_shrubbery";
    std::ofstream file;
    file.open(n);
    if (file.is_open() != 0)
    {
        file << "\n\n\n\n\n\n";
        file << "               ,@@@@@@@,\n";
        file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
        file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
        file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
        file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
        file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
        file << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
        file << "       |.|        |.|         |.|\n";
        file << "       |.|        |.|         |.|\n";
        file << "     \\/...\\//_/__/...\\_// __\\/...\\_    \n";
        file.close();
    }
    else
        std::cout << "Error opening file" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == 1 && executor.getGrade() <= this->getGradeExecute())
        ascii_tree();
    else
        throw NotExecuteException();
}