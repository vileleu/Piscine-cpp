/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:02:33 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 17:44:59 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
	
	FragTrap();
	FragTrap(std::string n);
	FragTrap(FragTrap const &cpy);
	virtual	~FragTrap();
	FragTrap&		operator=(FragTrap const &rhs);
	virtual	void	attack(std::string const &target);
	void			highFivesGuys(void);
};

#endif
