/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:08:23 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 20:43:56 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "New Dog\n";
}

Dog::Dog(Dog const &copy) : Animal("Dog")
{
	this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "New Dog copied\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A Dog left the game\n";
}

void	Dog::makeSound() const
{
	std::cout << "OUAF\n";
}

Brain	*Dog::getBrain() const
{
	return this->brain;
}

Dog&	Dog::operator=(Dog const &obj)
{
	delete this->brain;
	this->type = obj.type;
	this->brain = new Brain(*(obj.getBrain()));
	return *this;
}
