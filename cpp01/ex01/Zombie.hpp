/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 04:16:07 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 22:10:35 by vico             ###   ########.fr       */
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
};

Zombie* zombieHorde(int n, std::string name);

#endif
