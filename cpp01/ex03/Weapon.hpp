/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:54:36 by vico              #+#    #+#             */
/*   Updated: 2021/06/16 19:17:09 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:

	std::string	type;

	public:

	Weapon();
	Weapon(std::string s);
	~Weapon();
	const std::string	&getType();
	void				setType(std::string s);
};

#endif
