/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:09:54 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 18:44:17 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string s) : name(s)
{
	weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (!weapon)
	{
		std::cout << name << " has no weapon\n";
		return ;
	}
	std::cout << name << " attacks with his " << weapon->getType() << "\n";
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}
