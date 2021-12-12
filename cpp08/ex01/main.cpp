/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 05:05:32 by vico              #+#    #+#             */
/*   Updated: 2021/12/09 22:12:16 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----\n";
	try
	{
		Span sp = Span(1000);

		for (int i(0); i < 1000; i++)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----\n";
	try
	{
		Span sp = Span(1);

		sp.addNumber(10);
		sp.addNumber(12);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp = Span(10);
		std::vector<int>	vec;

		sp.addNumber(10);
		sp.addNumber(87);
		sp.addNumber(163);
		sp.addNumber(83);
		sp.addNumber(597);

		vec.push_back(5);
		vec.push_back(50);
		vec.push_back(24);
		vec.push_back(13);
		vec.push_back(7);

		sp.addIterable(vec.begin(), vec.end());
		std::cout << "----" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "\n----print----:" << std::endl;
		sp.print();
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
