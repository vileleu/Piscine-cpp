/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:50:24 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 13:58:54 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
    try
    {
    	Bureaucrat	donny("Donny", 150);

		std::cout << donny;
		donny.decremente();
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
	try
    {
    	Bureaucrat	alex("Alex", 0);

		std::cout << alex;
		alex.incremente();
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
	return 0;
}