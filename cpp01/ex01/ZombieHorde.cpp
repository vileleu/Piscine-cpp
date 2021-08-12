/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 04:08:41 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 22:12:07 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

Zombie* zombieHorde(int n, std::string name)
{
	Zombie	*horde;
	
	horde = new Zombie [n];
	for (int i(0); i < n; i++)
		horde[i] = Zombie(name);
	return horde;
}
