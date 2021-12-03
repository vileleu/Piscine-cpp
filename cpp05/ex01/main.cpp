/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:50:24 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 14:29:29 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	std::cout << "\n------\n\n";
	try
    {
		Bureaucrat	alex("Alex", 5);
		Form		paper("Paper", 5, 1);

		std::cout << paper;
		alex.signForm(paper);
		std::cout << paper;

		Bureaucrat	curtis("Curtis", 100);
		Form		work("Work", 100, 1);

		std::cout << curtis;
		std::cout << work;
		curtis.signForm(work);
		std::cout << work;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
	return 0;
}