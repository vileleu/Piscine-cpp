/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:58 by vico              #+#    #+#             */
/*   Updated: 2021/07/01 04:23:04 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:

	std::string	name;
	int			Hitpoints;
	int			Energy_points;
	int			Attack_damage;

	public:
	
	ClapTrap(std::string s);
	~ClapTrap();
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
