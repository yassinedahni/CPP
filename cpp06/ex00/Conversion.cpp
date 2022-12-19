/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:41:07 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/19 18:38:33 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iomanip>

int check_char(std::string s)
{
    for (int i = 0; s[i]; i++)
    {
        if(isdigit(s[i]))
            return (0);
    }
    return (1);
}

int calcul(std::string s, char c)
{
    int i = 0;
    int count = 0;
    while(s[i])
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return (count);
}

void convert_to_float(std::string s)
{
    float r = std::atof(s.c_str());
    size_t p = s.find(".");
    int c = 0;
    if (s.find(".") != std::string::npos)
    {
        while (s[p])
        {
            c++;
            p++;
        }
        if (calcul(s, 'f') == 1)
            c -= 2;
        else
            c -= 1;
    }
    else
        c = 1;
    if (s.length() == 1 && isdigit(s[0]) == 0)
    {
        std::cout << "float: impossible" << std::endl;
    }
    else
        std::cout << "float: " << std::fixed << std::setprecision(c) << static_cast<float>(r) << "f" << std::endl;
}

void convert_to_int(std::string s)
{
    int r = std::atoi(s.c_str());
    if (check_char(s) != 1)
        std::cout << "int: "<< static_cast<int> (r) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
}
int check_f_point(std::string s)
{
    int i = 0;
    int count = -1;
    if (s.find("nan") == std::string::npos && s.find("inf") == std::string::npos)
    {
        while (s[i])
        {
            if ((isdigit(s[i]) == 0 && s[i] != 'f' &&  s[i] != '.' && s[i] != '-' && s[i] != '+' ) || calcul(s, 'f') > 1)
                count++;
            i++;
        }
    }
    else if (s.find("nan") != std::string::npos || s.find("inf") != std::string::npos)
    {
        return (-1);
    }
    return (count);
}

int check_f(std::string s)
{
    int f = s.find("f");
    if (s.find("inf", 0, s.length()) == 0 || s.find("inff",  0, s.length()) == 0 
        || s.find("-inf",  0, s.length()) == 0 || s.find("-inff",  0, s.length()) == 0 
        || s.find("+inf") == 0 || s.find("+inff") == 0)
    {
        return (0);
    }
    if (calcul(s, 'f') > 1)
        return (-1);
    if ((s[strlen(s.c_str()) - 1] == 'f' && isdigit(s[strlen(s.c_str()) - 2]) == 0 &&  s[strlen(s.c_str()) - 2] == '.'))
        return (-1);
    if (s.find("f") == std::string::npos)
        return (0);
    while (s[f])
    {
        if (s[f + 1] != '\0')
            return (-1);
        f++;
    }
    return (0);
}

int check_arg(std::string s, char x)
{
    int c = s.find(x);
    if (s.find(x) != std::string::npos)
    {
        if (s[c] != s[0])
            return (-1);
    }
    return (0);
}

int check_error(std::string s)
{
    if (s.length() == 1)
        return (0);
    if (calcul(s, '.') > 1)
        return (-1);
    if (s[0] == '.')
        return (-1);
    if (s[0] == 'f')
        return (-1);
    if (calcul(s, '-') > 1)
        return (-1);
    if (calcul(s, '+') > 1)
        return (-1);
    if (s[strlen(s.c_str()) - 1] == '.')
        return (-1);
    if (check_f_point(s) != -1)
        return (-1);
    if (check_f(s) == -1)
        return (-1);
    if (check_arg(s, '-') == -1)
        return (-1);
    if (check_arg(s, '+') == -1)
        return (-1);
    if (std::atoi(s.c_str()) > 2147483647 || (std::atoi(s.c_str()) <= -2147483648))
        return (-1);
    return (0);
}

void convert_to_double(std::string s)
{
    double r = std::strtod(s.c_str(), NULL);
    size_t p = s.find(".");
    int c = 0;
    if (s.find(".") != std::string::npos)
    {
        while (s[p])
        {
            c++;
            p++;
        }
        if (calcul(s, 'f') == 1)
            c -= 2;
        else
            c -= 1;
    }
    else
        c = 1;
    if (s.length() == 1 && isdigit(s[0]) == 0)
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << std::fixed << std::setprecision(c) << static_cast<double>(r) << std::endl;
}

void convert_to_char(std::string s)
{
    if (s.length() == 1 && isdigit(s[0]) == 0)
    {
        std::cout << "char: '" << s << "'"<< std::endl;
    }
    else
    {
        int c = atoi(s.c_str());
        if ((c == 0 && s.find("nan") != std::string::npos) || (c == 0 && s.find("inf") != std::string::npos))
        {
            std::cout << "char: impossible" << std::endl;
            return ;
        }
        if (c >= 0 && c <= 255)
        {
            if (std::isprint(c) != 0)
                std::cout << "char: '" << static_cast<char>(c) << "'"<< std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;
    }
}

void conversion(std::string s)
{
    if (check_error(s) != 0)
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    convert_to_char(s);
    convert_to_int(s);
    convert_to_float(s);
    convert_to_double(s);
}

