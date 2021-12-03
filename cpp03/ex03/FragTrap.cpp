/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:03:55 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 17:44:38 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	setname("unnamed");
	setHitpoints(0);
	setEnergypoints(0);
	setAttackdamage(0);
	std::cout << "FragTrap " << name << " is prepare!\n";
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap " << name << " is prepare!\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is not prepare now, he's leaving\n";
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << name << " don't like " << target << ", he hurt him with " << Attack_damage << " damages\n";
}

FragTrap&	FragTrap::operator=(FragTrap const &rhs)
{
	this->name = rhs.getname();
	this->Hitpoints = rhs.getHitpoints();
	this->Energy_points = rhs.getEnergypoints();
	this->Attack_damage = rhs.getAttackdamage();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " : \"you want high five?\"👋\n";
}
