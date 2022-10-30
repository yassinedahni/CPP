/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:34:46 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/28 22:07:51 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout <<  "address of the string variable is : " << &string << std::endl;
    std::cout <<  "address held by stringPTR is : " << stringPTR << std::endl;
    std::cout <<  "address held by stringREF is : " << &stringREF << std::endl;

    std::cout <<  "The value of the string variable is  : " << string << std::endl;
    std::cout <<  "The value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout <<  "The value pointed to by stringREF is : " << stringREF << std::endl;
}