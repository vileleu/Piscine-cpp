/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 20:34:02 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 20:25:47 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i(0); i < 100; i++)
		this->ideas[i] = "idea";
	std::cout << "Brain is ready\n";
}

Brain::Brain(Brain const &copy)
{
	(void)copy;
	for (int i(0); i < 100; i++)
		this->ideas[i] = "idea";
	std::cout << "Brain copied\n";
}

Brain::~Brain()
{
	std::cout << "One brain is gone\n";
}

std::string*	Brain::getIdeas()
{
	return this->ideas;
}

Brain&	Brain::operator=(Brain const &obj)
{
	(void)obj;
	return *this;
}
