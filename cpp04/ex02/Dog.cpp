/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:08:23 by vico              #+#    #+#             */
/*   Updated: 2021/07/12 04:30:03 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

using namespace std;

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	cout << "New Dog\n";
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
}

Dog::~Dog()
{
	delete this->brain;
	cout << "A dog left the game\n";
}

void	Dog::makeSound() const
{
	cout << "OUAF\n";
}

Dog&	Dog::operator=(Dog const &obj)
{
	this->type = obj.type;
	this->brain = obj.brain;
	return *this;
}
