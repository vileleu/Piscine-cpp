/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 21:40:00 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 21:43:49 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

Zombie* newZombie(string name)
{
	Zombie	*zombie(NULL);

	zombie = new Zombie(name);
	return zombie;
}