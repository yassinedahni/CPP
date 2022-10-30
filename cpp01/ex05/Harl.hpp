/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:36:46 by ydahni            #+#    #+#             */
/*   Updated: 2022/10/27 20:46:46 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public :
        void complain(std::string level);
};


#endif