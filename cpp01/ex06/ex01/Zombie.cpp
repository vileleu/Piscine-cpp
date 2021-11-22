/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 04:15:02 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 04:39:15 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << z_name << "BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name)
{
	z_name = name;
}

Zombie::~Zombie()
{
	std::cout << z_name << " is dying...\n";
}

void	Zombie::announce()
{
	std::cout << z_name << " : hey i'm zombie, i eat brains, come on\n";
}

void	Zombie::SetName(std::string name)
{
	this->z_name = name;
}
