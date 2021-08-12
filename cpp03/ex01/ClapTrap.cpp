/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:43:54 by vico              #+#    #+#             */
/*   Updated: 2021/06/27 21:30:31 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using namespace std;

ClapTrap::ClapTrap(string s) : name(s), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	cout << name << " is ready for fight!\n";
}

ClapTrap::~ClapTrap()
{
	cout << name << " is afraid he runs away...\n";
}

void	ClapTrap::attack(std::string const &target)
{
	cout << name << " is attacking " << target << ", he takes " << Attack_damage << " damages\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	Hitpoints -= amount;
	if (Hitpoints < 0)
		Hitpoints = 0;
	cout << name << " takes " << amount << " damages\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	Hitpoints += amount;
	if (Hitpoints > 10)
		Hitpoints = 10;
	cout << name << " gets fixed for " << amount << " Hitpoints\n";
}
