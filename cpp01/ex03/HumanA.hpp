/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:02:21 by vico              #+#    #+#             */
/*   Updated: 2021/06/16 19:39:02 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:

	std::string	name;
	Weapon		&weapon;

	public:
	
	HumanA(std::string s, Weapon &w);
	~HumanA();
	void	attack();
};

#endif
