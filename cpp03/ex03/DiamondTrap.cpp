/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 21:24:21 by vico              #+#    #+#             */
/*   Updated: 2021/07/01 04:45:06 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

using namespace std;

DiamondTrap::DiamondTrap(string s) : ClapTrap(s + "_clap_name"), ScavTrap(s), FragTrap(s)
{
	name = s;
	ClapTrap::name = s + "_clap_name";
	Hitpoints = FragTrap::Hitpoints;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;
	cout << "DiamondTrap " << name << " is activate\n";
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap " << name << " is desactivate\n";
}

void	DiamondTrap::whoAmI()
{
	cout << "name : " << name << "\n";
	cout << "clap_name : " << ClapTrap::name << "\n";
}
