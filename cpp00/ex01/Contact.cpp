/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:44:43 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/21 17:45:14 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    Contact::SetFirstname(std::string fname)
{
    firstname = fname;
}

std::string Contact::GetFirstname() const
{
    return (firstname);
}

void    Contact::SetLasttname(std::string lname)
{
    lastname = lname;
}

std::string    Contact::GetLasttname() const
{
    return (lastname);
}

void    Contact::SetNickname(std::string nname)
{
    nickname = nname;
}

std::string    Contact::GetNickname() const
{
    return (nickname);
}

void    Contact::SetPhonenumber(std::string Pnumber)
{
    phonenumber = Pnumber;
}

std::string    Contact::GetPhonenumber() const
{
    return (phonenumber);
}

void    Contact::SetDarkestsecret(std::string dsecret)
{
    darkestsecret = dsecret;
}

std::string    Contact::GetDarkestsecret() const
{
    return (darkestsecret);
}
