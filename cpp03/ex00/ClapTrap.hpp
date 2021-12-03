/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:58 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 16:36:45 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:

	std::string	name;
	int			Hitpoints;
	int			Energy_points;
	int			Attack_damage;

	public:

	ClapTrap();
	ClapTrap(std::string s);
	ClapTrap(ClapTrap const &cpy);
	~ClapTrap();
	ClapTrap&	operator=(ClapTrap const &rhs);
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setname(const std::string s);
	void	setHitpoints(const int n);
	void	setEnergypoints(const int n);
	void	setAttackdamage(const int n);
	std::string	getname() const;
	int		getHitpoints() const;
	int		getEnergypoints() const;
	int		getAttackdamage() const;
};

#endif
