/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:15 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 16:21:46 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	ClapTrap	clap("Henry");

	clap.attack("Donny");
	clap.takeDamage(8);
	clap.beRepaired(5);

	std::cout << "\n---FragTrap---\n\n";
	FragTrap	frag("Jhon");

	frag.takeDamage(66);
	frag.beRepaired(33);
	std::cout << "FragTrap " << frag.getname() << " has " << frag.getHitpoints() << " hitpoints\n";
	frag.highFivesGuys();
}
