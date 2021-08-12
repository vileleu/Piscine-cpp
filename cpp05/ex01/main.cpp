/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:50:24 by vico              #+#    #+#             */
/*   Updated: 2021/07/15 21:27:20 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

using namespace std;

int		main()
{
    try
    {
    	Bureaucrat	donny("Donny", 150);

		cout << donny;
		donny.decremente();
    }
    catch (exception & e)
    {
        cout << e.what();
    }
	try
    {
		Bureaucrat	alex("Alex", 5);
		Form		paper("Paper", 5, 10);

		cout << paper;
		paper.beSigned(alex);
		cout << paper;

		Bureaucrat	curtis("Curtis", 100);
		Form		work("Paper", 100, 10);

		curtis.signForm(work);
    }
    catch (exception & e)
    {
        cout << e.what();
    }
	return 0;
}