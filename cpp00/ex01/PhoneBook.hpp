/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:30:36 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/21 18:42:42 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
    public:
        void    SetFirstname(std::string fname);
        std::string    GetFirstname() const;
        void    SetLasttname(std::string lname);
        std::string    GetLasttname() const;
        void    SetNickname(std::string nname);
        std::string    GetNickname() const;
        void    SetPhonenumber(std::string Pnumber);
        std::string    GetPhonenumber() const;
        void    SetDarkestsecret(std::string dsecret);
        std::string    GetDarkestsecret() const;
};

class PhoneBook
{
    public:
        Contact pb[8];
};

#endif