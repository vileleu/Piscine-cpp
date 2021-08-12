/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 18:38:07 by vico              #+#    #+#             */
/*   Updated: 2021/06/16 19:32:11 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

using namespace std;

Weapon::Weapon(string s)
{
	type = s;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const string	&Weapon::getType()
{
	return type;
}

void	Weapon::setType(string s)
{
	type = s;
}
