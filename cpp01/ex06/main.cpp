/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 02:40:05 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 22:41:53 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		error(std::string text)
{
	std::cout << text;
	return 0;
}

int		which_one(std::string s)
{
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			n(0);
	
	while (tab[n] != s && n < 4)
		n++;
	return n;
}

void	print(int lvl, Karen karen)
{
	switch(lvl)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			karen.complain(DEBUG);
			std::cout << "\n";
    		break;
		case 1:
			std::cout << "[ INFO ]\n";
			karen.complain(INFO);
			std::cout << "\n";
    		break;
		case 2:
			std::cout << "[ WARNING ]\n";
			karen.complain(WARNING);
			std::cout << "\n";
			break;
		case 3:
			std::cout << "[ ERROR ]\n";
			karen.complain(ERROR);
			std::cout << "\n";
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

int		main(int ac, char **av)
{
	Karen	karen;
	std::string	answer;

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
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
	return 0;
}