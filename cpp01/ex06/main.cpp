/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 02:40:05 by vico              #+#    #+#             */
/*   Updated: 2021/06/27 20:29:25 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

using namespace std;

int		error(string text)
{
	cout << text;
	return 0;
}

int		which_one(string s)
{
	if (s == "DEBUG")
		return 0;
	else if (s == "INFO")
		return 1;
	else if (s == "WARNING")
		return 2;
	else if (s == "ERROR")
		return 3;
	else
		return -1;
}

void	print(int lvl, Karen karen)
{
	switch(lvl)
	{
		case 0:
			cout << "[ DEBUG ]\n";
			karen.complain(DEBUG);
			cout << "\n";
    		break;
		case 1:
			cout << "[ INFO ]\n";
			karen.complain(INFO);
			cout << "\n";
    		break;
		case 2:
			cout << "[ WARNING ]\n";
			karen.complain(WARNING);
			cout << "\n";
			break;
		case 3:
			cout << "[ ERROR ]\n";
			karen.complain(ERROR);
			cout << "\n";
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

int		main(int ac, char **av)
{
	Karen	karen;
	string	answer;

	if (ac <= 1)
		return error("need arguments\n");
	else if (ac >= 3)
		return error("too much arguments\n");
	answer = av[1];
	switch(which_one(answer))
	{
		case 0:
			print(0, karen);
			print(1, karen);
			print(2, karen);
			print(3, karen);
    		break;
		case 1:
			print(1, karen);
			print(2, karen);
			print(3, karen);
    		break;
		case 2:
			print(2, karen);
			print(3, karen);
			break;
		case 3:
			print(3, karen);
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
	return 0;
}