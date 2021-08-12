/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:08:23 by vico              #+#    #+#             */
/*   Updated: 2021/07/09 19:55:14 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

using namespace std;

Dog::Dog() : Animal("Dog")
{
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
}

Dog::~Dog()
{
}

void	Dog::makeSound() const
{
	cout << "OUAF\n";
}

Dog&	Dog::operator=(Dog const &obj)
{
	this->type = obj.type;
	return *this;
}
