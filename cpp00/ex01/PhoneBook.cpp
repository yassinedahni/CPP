/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:30:54 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/21 17:58:30 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    affiche_options()
{
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "----------------     YOUR OPTIONS    -----------------" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "-------------            ADD           ---------------" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "---------               SEARCH              ----------" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
    std::cout << "------                   EXIT                   ------" << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;
}

int check_if_not_valid(std::string in)
{
    int i;

    i = 0;
    while (in[i])
    {
        if (isalpha(in[i]) || isdigit(in[i]))
            i++;
        else
            return (1);
    }
    return (0);
}

std::string   check_if_not_empty(std::string string)
{
    std::string in;

    while (1)
    {
        if (std::cin.eof())
            exit(1);
        std::cout << string;
        std::getline(std::cin, in);
        if (!in.empty() && check_if_not_valid(in) == 0)
            break;  
    }
    return (in);
}

int check_if_digit(std::string in)
{
    int i;

    i = 0;
    while (in[i])
    {
        if (isdigit(in[i]))
            i++;
        else
            return (1);
    }
    return (0);
}

std::string   check_if_not_empty_and_number(std::string string)
{
    std::string in;

    while (1)
    {
        if (std::cin.eof())
            exit(1);
        std::cout << string;
        std::getline(std::cin, in);
        if (!in.empty() && check_if_digit(in) == 0)
            break;  
    }
    return (in);
}

void    printstring(std::string in)
{
    int i;
    int x;

    i = 0;
    x = 0;
    if (in.length() >= 10)
    {
        i = 0;
        while (i < 9)
        {
            std::cout << in[i];
            i++;
        }
        std::cout << ".";
    }
    else
    {
        i = 0;
        x = in.length();
        while (i < x)
        {
            std::cout << in[i];
            i++;
        }
        while (i < 10)
        {
            std::cout << " ";
            i++;
        }
    }
}

void choose_index(PhoneBook ph, int i)
{
    std::string in;
    int x;

    x = -1;
    std::cout << std::endl << "Please Entre Your Chose : ";
    getline(std::cin, in);
    x = atoi(in.c_str());
    if (x < i && x >= 0 && check_if_digit(in) == 0)
    {
        std::cout << std::endl << std::endl;
        std::cout << "First Name     : ";
        std::cout << ph.pb[x].GetFirstname() << std::endl;
        std::cout << "Last Name      : ";
        std::cout << ph.pb[x].GetLasttname() << std::endl;
        std::cout << "Nick Name      : ";
        std::cout << ph.pb[x].GetNickname() << std::endl;
        std::cout << "Darkest Secret : ";
        std::cout << ph.pb[x].GetDarkestsecret() << std::endl;
        std::cout << "Phone Number   : ";
        std::cout << ph.pb[x].GetPhonenumber() << std::endl << std::endl;
    }
}

int main()
{
    PhoneBook ph;
    std::string check;
    std::string in;
    int i;
    int x;
    int j;

    i = 0;
    x = 0;
    j = 0;
    while (1)
    {
        affiche_options();
        std::cout << std::endl << "ENTER YOUR CHOOSE HERE : ";
        std::getline(std::cin, check);
        if (std::cin.eof())
            exit(1);
        if (check == "ADD")
        {
            std::cout << std::endl << "                 Contacts Index Is : " << i << std::endl << std::endl; 
            in = check_if_not_empty("Enter your fisrt name    : ");
            ph.pb[i].SetFirstname(in);
            in = check_if_not_empty("Enter your last name     : ");
            ph.pb[i].SetLasttname(in);
            in = check_if_not_empty("Enter your nickname      : ");
            ph.pb[i].SetNickname(in);
            in = check_if_not_empty_and_number("Enter your Phone number  : ");
            ph.pb[i].SetPhonenumber(in);
            in = check_if_not_empty("Enter your darkest secret : ");
            ph.pb[i].SetDarkestsecret(in);
            i++;
            j++;
            if (i == 8)
                i = 0;
        }
        if (check == "SEARCH")
        {
            std::cout << "--------------------------------------------------" << std::endl;
            std::cout << "----------        CHOOSE INDEX        ------------" << std::endl;
            std::cout << "--------------------------------------------------" << std::endl;
            std::cout << "  index   |" << " first name |" << " last name  |" << " nickname   |" << std::endl;
            std::cout << "--------------------------------------------------" << std::endl;
            if (j > 8)
                j = 8;
            x = 0;
            while (x < j)
            {
                std::cout << "    " << x << "    ";
                std::cout << " | ";
                printstring(ph.pb[x].GetFirstname());
                std::cout << " | ";
                printstring(ph.pb[x].GetLasttname());
                std::cout << " | ";
                printstring(ph.pb[x].GetNickname());
                std::cout << " |" << std::endl;
                std::cout << "--------------------------------------------------" << std::endl;
                x++;
            }
            choose_index(ph, j);
        }
        if (check == "EXIT")
            exit(0);
    }
    
}