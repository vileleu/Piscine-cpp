/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:09:54 by vico              #+#    #+#             */
/*   Updated: 2021/06/16 19:49:59 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using namespace std;

HumanB::HumanB(string s) : name(s)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	cout << name << " attacks with his " << weapon->getType() << "\n";
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}
