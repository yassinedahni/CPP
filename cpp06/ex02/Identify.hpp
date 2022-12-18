/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 00:25:48 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/19 00:49:03 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_H
#define IDENTIFY_H

#include <iostream>

class Base
{
    public :
        virtual ~Base();
};

class A : public Base
{
    
};

class B : public Base
{
    
};

class C : public Base
{
    
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif