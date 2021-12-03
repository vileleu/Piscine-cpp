/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:08:35 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 19:26:53 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "cat created\n";
}

Cat::Cat(Cat const &copy)
{
	std::cout << "cat copied\n";
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "cat destroyed\n";
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaaaou\n";
}

Cat&	Cat::operator=(Cat const &obj)
{
	this->type = obj.type;
	return *this;
}
