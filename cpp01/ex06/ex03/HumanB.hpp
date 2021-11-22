/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:09:28 by vico              #+#    #+#             */
/*   Updated: 2021/06/16 19:51:11 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:

	std::string	name;
	Weapon		*weapon;

	public:
	
	HumanB(std::string s);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &w);
};

#endif
