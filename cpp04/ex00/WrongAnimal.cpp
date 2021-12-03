/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:18:59 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 19:28:17 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "wrong animal created\n";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "wrong animal created\n";
	this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "wrong animal copied\n";
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrong animal destroyed\n";
}

void WrongAnimal::makeSound() const
{
	//do nothing
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const &obj)
{
	this->type = obj.getType();
	return *this;
}
