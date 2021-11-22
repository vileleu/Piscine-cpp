/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 21:08:23 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 22:07:38 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		err_msg(std::string msg)
{
	std::cerr << "Error : " << msg;
	return 1;
}

int		main(int ac, char **av)
{
	if (ac > 4)
		return err_msg("Too much arguments\n");
	if (ac < 4)
		return err_msg("Too few arguments\n");
	std::string		file(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::ifstream	read(file.c_str());

	if (!read)
		return err_msg("Can't open file\n");
	file += ".replace";
	std::ofstream	write(file.c_str());
	char			a(0);
	int				i(0);
	int				not_same(1);

	if (!read.get(a))
		a = 0;
	while (a)
	{
		i = 0;
		not_same = 1;
		if (a != s1[i])
		{
			write << a;
			if (!read.get(a))
				a = 0;
		}
		else if (s1.size() > 1)
		{
			i++;
			file = a;
			while (read.get(a) && s1[i] && a == s1[i])
			{
				file += a;
				i++;
				if (i == s1.size())
				{
					write << s2;
					if (!read.get(a))
						a = 0;
					not_same = 0;
					break;
				}
			}
			if (not_same)
				write << file;
		}
		else
		{
			write << s2;
			if (!read.get(a))
				a = 0;
		}
	}
	return 0;
}