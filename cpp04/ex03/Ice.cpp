/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 05:15:44 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 02:28:20 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

using namespace std;

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &copy) : AMateria("ice")
{
	*this = copy;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria	&Ice::operator=(AMateria const &obj)
{
	return *this;
}
