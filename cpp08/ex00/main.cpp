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

using namespace std;

int		main()
{
	try
	{
		vector<int>	vec;

		vec.push_back(5);
		vec.push_back(45);
		vec.push_back(1176);
		vec.push_back(90);
		cout << easyfind(vec, 90) << "\n";
	}
	catch(const exception & e)
	{
		cerr << e.what() << '\n';
	}
	try
	{
		list<int>	lis;

		lis.push_back(5);
		lis.push_back(45);
		lis.push_back(1176);
		lis.push_back(91);
		cout << easyfind(lis, 90) << "\n";
	}
	catch(const exception & e)
	{
		cerr << e.what() << '\n';
	}
	try
	{
		array<int, 4>	arr = {5, 90, 1176, 91};

		cout << easyfind(arr, 90) << "\n";
	}
	catch(const exception & e)
	{
		cerr << e.what() << '\n';
	}
	return 0;
}