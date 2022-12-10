/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:30:37 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/09 23:34:31 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "Form.hpp"

class Intern
{
    public:
        Form * makeForm(std::string name, std::string target);
        Intern();
        Intern(const Intern &i);
        Intern &operator=(const Intern &i);
        ~Intern();
};


#endif