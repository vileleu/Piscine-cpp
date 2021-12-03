/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:15 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 15:51:00 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main()
{
	ClapTrap	clap("Henry");

	clap.attack("Donny");
	clap.takeDamage(8);
	clap.beRepaired(5);

	std::cout << "\n---ScavTrap---\n\n";
	ScavTrap	scav("Josh");

	scav.attack("Henry");
	scav.guardGate();
	return 0;
}
