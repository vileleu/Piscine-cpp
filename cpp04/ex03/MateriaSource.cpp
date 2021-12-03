/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:54:02 by vico              #+#    #+#             */
/*   Updated: 2021/11/27 05:52:43 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i(0); i < 4; i++)
		this->_learn[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	this->_size = copy.getSize();
	for (int i(0); i < 4; i++)
	{
		this->_learn[i] = 0;
		if (i < this->_size)
			this->_learn[i] = copy.getAMateria(i)->clone();
	}
}

MateriaSource::~MateriaSource()
{
	for (int i(0); i < 4; i++)
		delete this->_learn[i];
}

int					MateriaSource::getSize() const
{
	return this->_size;
}

AMateria			*MateriaSource::getAMateria(int idx) const
{
	if (idx > 3 || idx < 0)
		return NULL;
	return this->_learn[idx];
}

void MateriaSource::learnMateria(AMateria* learn)
{
	if (!learn)
		return ;
	for (int i(0); i < 4; i++)
	{
		if (!this->_learn[i])
		{
			this->_learn[i] = learn;
			return ;
		}
	}
	std::cout << "too many Materias learned\n";
	delete learn;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i(0); i < 4 && this->_learn[i]; i++)
	{
		if (this->_learn[i]->getType() == type)
			return this->_learn[i]->clone();
	}
	return 0;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &obj)
{
	this->_size = obj.getSize();
	for (int i(0); i < 4; i++)
	{
		if (this->_learn[i])
			delete this->_learn[i];
		this->_learn[i] = 0;
		if (i < this->_size)
			this->_learn[i] = obj.getAMateria(i)->clone();
	}
	return *this;
}
