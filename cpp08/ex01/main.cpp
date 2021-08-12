/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 05:05:32 by vico              #+#    #+#             */
/*   Updated: 2021/08/03 06:21:37 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

using namespace std;

int		main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		cout << sp.shortestSpan() << endl;
		cout << sp.longestSpan() << endl;
	}
	catch(const exception & e)
	{
		cerr << e.what() << '\n';
	}
	cout << "\n";
	try
	{
		Span sp = Span(1000);

		for (int i(0); i < 1000; i++)
			sp.addNumber(i);
		cout << sp.shortestSpan() << endl;
		cout << sp.longestSpan() << endl;
	}
	catch(const exception & e)
	{
		cerr << e.what() << '\n';
	}
	return 0;
}
