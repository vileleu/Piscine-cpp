/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:08:05 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 17:45:08 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:

	ScavTrap();
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const &cpy);
	virtual	~ScavTrap();
	ScavTrap&		operator=(ScavTrap const &rhs);
	virtual	void	attack(std::string const &target);
	void			guardGate();
};

#endif
