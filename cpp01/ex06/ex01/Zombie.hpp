/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 04:16:07 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 04:38:44 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
	private:

	std::string z_name;

	public:
	
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce();
	void	SetName(std::string name);
};

Zombie* zombieHorde(int n, std::string name);

#endif
