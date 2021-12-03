/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:18:53 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 19:28:38 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "wrong cat created\n";
}

WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "wrong cat copied\n";
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "wrong cat destroyed\n";
}

void WrongCat::makeSound() const
{
	std::cout << "wrong Miaou\n";
}

WrongCat&	WrongCat::operator=(WrongCat const &obj)
{
	this->type = obj.getType();
	return *this;
}
