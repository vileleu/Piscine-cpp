/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:15 by vico              #+#    #+#             */
/*   Updated: 2021/06/28 20:14:14 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

using namespace std;

int		main()
{
	ClapTrap	clap("Henry");

	clap.attack("Donny");
	clap.takeDamage(8);
	clap.beRepaired(5);

	cout << "\n---FragTrap---\n\n";
	FragTrap	frag("Jhon");
	frag.takeDamage(50);
	frag.highFivesGuys();
}
