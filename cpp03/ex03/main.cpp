/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:15 by vico              #+#    #+#             */
/*   Updated: 2021/07/01 04:42:21 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

using namespace std;

int		main()
{
	DiamondTrap	diamond("Henry");

	cout << "\n";
	diamond.attack("Donny");
	cout << "\n";
	diamond.takeDamage(8);
	cout << "\n";
	diamond.beRepaired(5);
	cout << "\n";
	diamond.guardGate();
	cout << "\n";
	diamond.highFivesGuys();
	cout << "\n";
	diamond.whoAmI();
	cout << "\n";
	return 0;
}
