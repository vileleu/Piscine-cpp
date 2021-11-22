/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 04:19:01 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 04:37:01 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	srand(time(NULL));
	Zombie	*horde;
	int		n(4);

	horde = zombieHorde(n, "alex");
	for (int i(0); i < n; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}