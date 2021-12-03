/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:09:34 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 17:44:31 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	setname("unnamed");
	setHitpoints(0);
	setEnergypoints(0);
	setAttackdamage(0);
	std::cout << "ScavTrap " << getname() << " is coming!\n";
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap " << n << " is coming!\n";
}

ScavTrap::ScavTrap(ScavTrap const &cpy)
{
	*this = cpy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " is leaving us\n";
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &rhs)
{
	this->name = rhs.getname();
	this->Hitpoints = rhs.getHitpoints();
	this->Energy_points = rhs.getEnergypoints();
	this->Attack_damage = rhs.getAttackdamage();
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attack " << target << " for " << this->Attack_damage << " damages\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode\n";
}
