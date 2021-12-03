/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:40:55 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 20:39:00 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "New Animal\n";
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "New Animal\n";
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "New Animal\n";
}

Animal::~Animal()
{
	std::cout << "One Animal die...\n";
}

std::string Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
}

Animal&	Animal::operator=(Animal const &obj)
{
	this->type = obj.type;
	return *this;
}
