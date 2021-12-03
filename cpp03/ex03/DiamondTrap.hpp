/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 21:23:01 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 17:40:25 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

	std::string	name;

	public:

	DiamondTrap();
	DiamondTrap(std::string s);
	DiamondTrap(DiamondTrap const &cpy);
	virtual	~DiamondTrap();
	DiamondTrap&	operator=(DiamondTrap const &rhs);
	virtual	void	attack(std::string const &target);
    std::string	getname() const;
	void		setname(std::string const n);
	void		whoAmI();
};

#endif
