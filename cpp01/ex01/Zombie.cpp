/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 04:15:02 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 22:08:52 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

Zombie::Zombie()
{
}

Zombie::Zombie(string name)
{
	z_name = name;
}

Zombie::~Zombie()
{
	/* Vide */
}

void	Zombie::announce()
{
	cout << z_name << " : hey i'm zombie, i eat brains, come on\n";
}
