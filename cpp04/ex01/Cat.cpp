/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:08:35 by vico              #+#    #+#             */
/*   Updated: 2021/07/12 04:29:55 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using namespace std;

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain();
	cout << "New Cat\n";
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
}

Cat::~Cat()
{
	delete this->brain;
	cout << "A Cat left the game\n";
}

void	Cat::makeSound() const
{
	cout << "Miaaaaaou\n";
}

Cat&	Cat::operator=(Cat const &obj)
{
	this->type = obj.type;
	this->brain = obj.brain;
	return *this;
}
