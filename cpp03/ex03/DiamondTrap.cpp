/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 21:24:21 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 17:47:53 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	setname("unnamed");
	setHitpoints(0);
	setEnergypoints(0);
	setAttackdamage(0);
	std::cout << "DiamondTrap " << name << " is activate\n";
}

DiamondTrap::DiamondTrap(std::string s) : ClapTrap(s), ScavTrap(s), FragTrap(s)
{
	name = s;
	ClapTrap::name = s + "_clap_name";
	Hitpoints = FragTrap::Hitpoints;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap " << name << " is activate\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy)
{
	*this = cpy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " is desactivate\n";
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->name = rhs.getname();
	ClapTrap::name = rhs.getname() + "_clap_name";
	this->Hitpoints = rhs.getHitpoints();
	this->Energy_points = rhs.getEnergypoints();
	this->Attack_damage = rhs.getAttackdamage();
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attack " << target << " for " << this->Attack_damage << " damages\n";
}

std::string	DiamondTrap::getname() const
{
	return this->name;
}

void		DiamondTrap::setname(std::string const n)
{
	this->name = n;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "name : " << name << "\n";
	std::cout << "clap_name : " << ClapTrap::name << "\n";
}
