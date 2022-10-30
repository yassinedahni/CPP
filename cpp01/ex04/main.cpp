/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:02:14 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/27 01:40:33 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    size_t i;
    std::string add;
    std::string buff;
    std::string find;
    std::string out;
    std::string sub;
    std::string namefile;
    std::ifstream read;
    std::ofstream write;

    if (ac == 4)
    {
        namefile = av[1];
        find = av[2];
        out = av[3];
        read.open(namefile);
        if (read.fail())
        {
            std::cout << "File Not Found" << std::endl;
            exit(1);
        }
        if (find.empty())
        {
            std::cout << "find is empty" << std::endl;
            exit(1);
        }
        while(std::getline(read, add))
        {
            i = 0;
            while ((i = add.find(find, i)) != std::string::npos)
            {
                sub = add.substr(0, i);
                sub += out;
                sub += add.substr(i + find.length(), add.length());
                add = sub;
                i += out.length();
            }
            buff += add;
            buff += "\n";
        }
        read.close();
        namefile += ".replace";
        write.open(namefile);
        if (write.fail())
        {
            std::cout << "File Not Found" << std::endl;
            exit(1);
        }
        else
            write << buff;
        write.close();        
    }
    else
    {
        std::cout << "The Number Of Parameters Should be three" << std::endl;
        exit(1);
    }
    return (0);
}