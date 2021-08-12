/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:40:55 by vico              #+#    #+#             */
/*   Updated: 2021/07/13 05:02:45 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

using namespace std;

Animal::Animal()
{
}

Animal::Animal(string type)
{
	this->type = type;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
}

Animal::~Animal()
{
}

std::string Animal::getType() const
{
	return this->type;
}

Animal&	Animal::operator=(Animal const &obj)
{
	this->type = obj.type;
	return *this;
}