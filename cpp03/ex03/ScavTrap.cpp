/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:09:34 by vico              #+#    #+#             */
/*   Updated: 2021/07/01 04:25:36 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using namespace std;

ScavTrap::ScavTrap(string n) : ClapTrap(n)
{
	name = n;
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	cout << "ScavTrap " << n << " is coming!\n";
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap " << name << " is leaving us\n";
}

void	ScavTrap::guardGate()
{
	cout << "ScavTrap " << name << " have enterred in Gate keeper mode\n";
}
