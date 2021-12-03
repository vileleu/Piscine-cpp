/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:08:23 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 19:27:31 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "dog created\n";
}

Dog::Dog(Dog const &copy)
{
	std::cout << "dog copied\n";
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "dog destroyed\n";
}

void	Dog::makeSound() const
{
	std::cout << "OUAF\n";
}

Dog&	Dog::operator=(Dog const &obj)
{
	this->type = obj.type;
	return *this;
}
