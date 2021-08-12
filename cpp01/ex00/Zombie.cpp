/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 04:15:02 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 21:51:47 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

Zombie::Zombie(string name)
{
	z_name = name;
}

Zombie::~Zombie()
{
	cout << z_name << " is dying...\n";
}

void	Zombie::announce()
{
	cout << z_name << " : hey i'm zombie, i eat brains, come on\n";
}
