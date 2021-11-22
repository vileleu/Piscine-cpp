/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 04:16:07 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 21:50:49 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Zombie
{
	private:

	std::string z_name;

	public:
	
	Zombie(std::string name);
	~Zombie();
	void	announce();
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
