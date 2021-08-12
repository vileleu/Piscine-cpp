/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:54:02 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 04:14:21 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

using namespace std;

MateriaSource::MateriaSource()
{
	for (int i(0); i < 4; i++)
		this->learn[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (int i(0); i < 4; i++)
		delete this->learn[i];
}

void MateriaSource::learnMateria(AMateria* learn)
{
	int	i(0);

	while (i < 4)
	{
		if (!this->learn[i])
		{
			this->learn[i] = learn;
			break ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i(0); i < 4 && this->learn[i]; i++)
	{
		if (this->learn[i]->getType() == type && type == "ice")
			return new Ice();
		else if (this->learn[i]->getType() == type && type == "cure")
			return new Cure();
	}
	return 0;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &obj)
{
	for (int i(0); i < 4; i++)
		this->learn[i] = obj.learn[i];
	return *this;
}
