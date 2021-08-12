/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 20:34:02 by vico              #+#    #+#             */
/*   Updated: 2021/07/12 04:31:23 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

using namespace std;

Brain::Brain()
{
	this->ideas = new string[100];
	for (int i(0); i < 100; i++)
		this->ideas[i] = "idea";
	cout << "Brain is ready\n";
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
}

Brain::~Brain()
{
	delete []this->ideas;
	cout << "One brain is gone\n";
}

Brain&	Brain::operator=(Brain const &obj)
{
	this->ideas = obj.ideas;
	return *this;
}
