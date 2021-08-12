/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:08:35 by vico              #+#    #+#             */
/*   Updated: 2021/07/09 19:54:51 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using namespace std;

Cat::Cat() : Animal("Cat")
{
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
}

Cat::~Cat()
{
}

void	Cat::makeSound() const
{
	cout << "Miaaaaaou\n";
}

Cat&	Cat::operator=(Cat const &obj)
{
	this->type = obj.type;
	return *this;
}
