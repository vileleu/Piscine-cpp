/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 04:19:01 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 22:13:26 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

int		main(void)
{
	Zombie	*horde;
	int		n(4);

	horde = zombieHorde(n, "alex");
	for (int i(0); i < n; i++)
		horde->announce();
	delete [] horde;
	return 0;
}