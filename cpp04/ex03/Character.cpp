/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 05:45:14 by vico              #+#    #+#             */
/*   Updated: 2021/11/27 05:54:57 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : ICharacter(), _name(name)
{
	this->_size = 0;
	for (int i(0); i < 4; i++)
		this->_tab[i] = 0;
}

Character::Character(Character const &copy) : ICharacter()
{
	this->_name = copy.getName();
	this->_size = copy.getSize();
	for (int i(0); i < this->_size; i++)
		this->equip(copy.getAMateria(i)->clone());
}

Character::~Character()
{
	for (int i(0); i < 4 && this->_tab[i]; i++)
		delete this->_tab[i];
}

std::string const	&Character::getName() const
{
	return this->_name;
}

unsigned int	Character::getSize() const
{
	return this->_size;
}

AMateria		*Character::getAMateria(int idx) const
{
	if (idx > 3 || idx < 0)
		return NULL;
	return this->_tab[idx];
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i(0); i < 4; i++)
	{
		if (!this->_tab[i])
		{
			(this->_size)++;
			this->_tab[i] = m;
			return ;
		}
	}
	std::cout << "too many Materias equiped\n";
	delete m;
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	this->_tab[idx] = 0;
	(this->_size)--;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;
	this->_tab[idx]->use(target);
}

Character	&Character::operator=(Character const &obj)
{
	this->_name = obj.getName();
	this->_size = obj.getSize();
	for (int i(0); i < 4; i++)
	{
		if (this->_tab[i])
			delete this->_tab[i];
		this->_tab[i] = 0;
		if (i < this->_size)
			equip(obj.getAMateria(i)->clone());
	}
	return *this;
}
