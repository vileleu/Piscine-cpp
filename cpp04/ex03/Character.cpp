/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 05:45:14 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 04:06:29 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

using namespace std;

Character::Character(string const &name) : ICharacter()
{
	this->name = name;
	for (int i(0); i < 4; i++)
		this->tab[i] = 0;
}

Character::Character(Character const &copy) : ICharacter()
{
	*this = copy;
}

Character::~Character()
{
	for (int i(0); i < 4 && this->tab[i]; i++)
		delete this->tab[i];
}

string const	&Character::getName() const
{
	return	this->name;
}

void	Character::equip(AMateria* m)
{
	int	i(0);

	while (i < 4)
	{
		if (!this->tab[i])
		{
			this->tab[i] = m;
			break ;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	this->tab[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4)
		this->tab[idx]->use(target);
}

Character	&Character::operator=(Character const &obj)
{
	for (int i(0); i < 4; i++)
		this->tab[i] = obj.tab[i];
	this->name = obj.name;
	return *this;
}
