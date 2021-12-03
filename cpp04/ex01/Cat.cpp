/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:08:35 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 20:43:46 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "New Cat\n";
}

Cat::Cat(Cat const &copy) : Animal("Cat")
{
	this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "New Cat copied\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A Cat left the game\n";
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaaaou\n";
}

Brain	*Cat::getBrain() const
{
	return this->brain;
}

Cat&	Cat::operator=(Cat const &obj)
{
	delete this->brain;
	this->type = obj.type;
	this->brain = new Brain(*(obj.getBrain()));
	return *this;
}
