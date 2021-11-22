/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 04:14:33 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 03:43:59 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	srand(time(NULL));
	Zombie	zombie("Chris");
	
	zombie.announce();

	Zombie	*ptr;

	ptr = newZombie("Anakin");
	ptr->announce();
	delete ptr;

	randomChump("Freshbreath");
	return 0;
}
