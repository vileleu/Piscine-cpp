/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 21:07:15 by vico              #+#    #+#             */
/*   Updated: 2021/05/30 15:05:54 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int		main(int ac, char** av)
{
	char	c(0);
	
	if (ac < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
    for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			c = av[i][j];
			if (c >= 97 && c <= 122)
				c -= 32;
			cout << c;
		}
		cout << ' ';
	}
	cout << '\n';
	return (0);
}