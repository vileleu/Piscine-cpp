/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:43:54 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 16:36:52 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("unnamed"), Hitpoints(0), Energy_points(0), Attack_damage(0)
{
	std::cout << "ClapTrap " << name << " is ready for fight!\n";
}

ClapTrap::ClapTrap(std::string s) : name(s), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "ClapTrap " << name << " is ready for fight!\n";
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	*this = cpy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " is afraid he runs away...\n";
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rhs)
{
	this->name = rhs.getname();
	this->Hitpoints = rhs.getHitpoints();
	this->Energy_points = rhs.getEnergypoints();
	this->Attack_damage = rhs.getAttackdamage();
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << name << " is attacking " << target << ", he takes " << Attack_damage << " damages\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	Hitpoints -= amount;
	if (Hitpoints < 0)
		Hitpoints = 0;
	std::cout << name << " takes " << amount << " damages\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	Hitpoints += amount;
	if (Hitpoints < 0)
		Hitpoints = 0;
	std::cout << name << " gets fixed for " << amount << " Hitpoints\n";
}

void	ClapTrap::setname(const std::string s)
{
	this->name = s;
}

void	ClapTrap::setHitpoints(const int n)
{
	if (n < 0)
		this->Hitpoints = 0;
	else
		this->Hitpoints = n;
}

void	ClapTrap::setEnergypoints(const int n)
{
	if (n < 0)
		this->Energy_points = 0;
	else
		this->Energy_points = n;
}

void	ClapTrap::setAttackdamage(const int n)
{
	if (n < 0)
		this->Attack_damage = 0;
	else
		this->Attack_damage = n;
}

std::string	ClapTrap::getname() const
{
	return this->name;
}

int		ClapTrap::getHitpoints() const
{
	return this->Hitpoints;
}

int		ClapTrap::getEnergypoints() const
{
	return this->Energy_points;
}

int		ClapTrap::getAttackdamage() const
{
	return this->Attack_damage;
}
