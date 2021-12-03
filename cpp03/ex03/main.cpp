/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:15 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 17:51:26 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main()
{
	{
		DiamondTrap	diamond("Henry");

		std::cout << "\n";
		diamond.attack("Donny");
		std::cout << "\n";
		diamond.takeDamage(8);
		std::cout << "\n";
		diamond.beRepaired(5);
		std::cout << "\n";
		diamond.guardGate();
		std::cout << "\n";
		diamond.highFivesGuys();
		std::cout << "\n";
		diamond.whoAmI();
		std::cout << "\n";
	}
	{
		DiamondTrap	warrior("Didier");

		std::cout << "\n";
		warrior.setAttackdamage(50);
		warrior.attack("Donny");
		std::cout << "\n";
		warrior.guardGate();
		std::cout << "\n";
		warrior.highFivesGuys();
		std::cout << "\n";
		warrior.whoAmI();
		std::cout << "\n";
	}
	return 0;
}
