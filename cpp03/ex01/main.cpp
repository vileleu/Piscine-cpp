/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:15 by vico              #+#    #+#             */
/*   Updated: 2021/06/28 19:59:25 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

using namespace std;

int		main()
{
	ClapTrap	clap("Henry");

	clap.attack("Donny");
	clap.takeDamage(8);
	clap.beRepaired(5);

	cout << "\n---ScavTrap---\n\n";
	ScavTrap	scav("Josh");
	scav.attack("Henry");
	scav.guardGate();
	return 0;
}
