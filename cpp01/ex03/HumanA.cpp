/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:01:59 by vico              #+#    #+#             */
/*   Updated: 2021/06/16 19:39:08 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

using namespace std;

HumanA::HumanA(string s, Weapon &w) : name(s), weapon(w)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	cout << name << " attacks with his " << weapon.getType() << "\n";
}
