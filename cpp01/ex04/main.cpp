/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 21:08:23 by vico              #+#    #+#             */
/*   Updated: 2021/06/18 20:22:30 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using namespace std;

int		err_msg(string msg)
{
	cout << "Error : " << msg;
	return 0;
}

int		main(int ac, char **av)
{
	if (ac > 4)
		return err_msg("Too few arguments\n");
	if (ac < 4)
		return err_msg("Not enough arguments\n");
	string		file(av[1]);
	string		s1(av[2]);
	string		s2(av[3]);
	ifstream	read(file.c_str());

	file += ".replace";
	ofstream	write(file.c_str());
	char		a;
	int			i(0);

	if (!read)
		return err_msg("Can't open file\n");
	while (read.get(a))
	{
		i = 0;
		if (a != s1[i])
			write << a;
		else if (s1.size() > 1)
		{
			i++;
			file = a;
			while (read.get(a) && a == s1[i++])
			{
				file += a;
				if (i == s1.size())
				{
					write << s2;
					break;
				}
			}
			if (i != s1.size())
				write << file << a;
		}
		else
			write << s2;
	}
	return 0;
}