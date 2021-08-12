/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:03:55 by vico              #+#    #+#             */
/*   Updated: 2021/06/28 20:17:01 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

using namespace std;

FragTrap::FragTrap(string n) : ClapTrap(n)
{
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	cout << "FragTrap " << name << " is prepare!\n";
}

FragTrap::~FragTrap()
{
	cout << "FragTrap " << name << " is not prepare, he's leaving\n";
}

void	FragTrap::highFivesGuys(void)
{
	cout << name << " : \"you want high five?\"👋\n";
}
