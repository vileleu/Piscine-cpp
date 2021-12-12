/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:39:32 by marvin            #+#    #+#             */
/*   Updated: 2021/07/31 19:39:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main()
{
	try
	{
		std::vector<int>	vec;

		vec.push_back(5);
		vec.push_back(45);
		vec.push_back(1176);
		vec.push_back(90);
		std::cout << easyfind(vec, 90) << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::list<int>	lis;

		lis.push_back(5);
		lis.push_back(45);
		lis.push_back(1176);
		lis.push_back(91);
		std::cout << easyfind(lis, 90) << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::deque<int>	deq;

		deq.push_back(90);
		deq.push_back(45);
		deq.push_back(1176);
		deq.push_back(91);
		std::cout << easyfind(deq, 90) << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}