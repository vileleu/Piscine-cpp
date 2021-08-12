/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 03:22:18 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 03:59:41 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interfaces.hpp"

using namespace std;

AMateria::AMateria(string const &type)
{
	this->type = type;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria::~AMateria()
{
}

std::string const	&AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter &target)
{
	
}

AMateria&	AMateria::operator=(AMateria const &obj)
{
	this->type = obj.type;
	return *this;
}
