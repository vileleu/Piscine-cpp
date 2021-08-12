/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:50:24 by vico              #+#    #+#             */
/*   Updated: 2021/07/15 04:26:01 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
    	Bureaucrat	alex("Alex", 0);
    }
    catch (exception & e)
    {
        cout << e.what();
    }
	return 0;
}