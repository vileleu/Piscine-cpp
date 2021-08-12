/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 05:23:02 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 02:28:33 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

using namespace std;

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &copy) : AMateria("cure")
{
	*this = copy;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	cout << "* heals " << target.getName() << "’s wounds *\n";
}

AMateria	&Cure::operator=(AMateria const &obj)
{
	return *this;
}
