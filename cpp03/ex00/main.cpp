/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:15 by vico              #+#    #+#             */
/*   Updated: 2021/06/27 21:29:18 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

using namespace std;

int		main()
{
	ClapTrap	clap("Henry");

	clap.attack("Donny");
	clap.takeDamage(8);
	clap.beRepaired(5);
}
