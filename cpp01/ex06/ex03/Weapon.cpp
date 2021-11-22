/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:38:07 by vico              #+#    #+#             */
/*   Updated: 2021/11/15 19:25:43 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string s)
{
	type = s;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType()
{
	return type;
}

void	Weapon::setType(std::string s)
{
	type = s;
}
