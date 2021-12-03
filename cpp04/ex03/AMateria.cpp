/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 03:22:18 by vico              #+#    #+#             */
/*   Updated: 2021/11/27 05:20:26 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Abstract_class.hpp"

AMateria::AMateria(std::string const &type)
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
	(void)target;
}

AMateria&	AMateria::operator=(AMateria const &obj)
{
	(void)obj;
	return *this;
}
