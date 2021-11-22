/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 04:08:41 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 04:38:37 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	std::string	tab_name[10] = {"Curtis", "Tony", "Alexei", "Jim", "Anakin", "Neo" , "Jack", "Bilbon", "John", "Heisenberg"};
	Zombie		*horde;
	
	horde = new Zombie[N];
	for (int i(0); i < N; i++)
		horde[i].SetName(tab_name[rand() % 10]);
	return horde;
}
