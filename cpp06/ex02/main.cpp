/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 00:26:44 by ydahni            #+#    #+#             */
/*   Updated: 2022/12/19 00:52:42 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
    Base *a = generate();
    identify(a);
    Base &r = *a;
    identify(r);
    delete(a);
}