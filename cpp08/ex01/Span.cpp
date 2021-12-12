/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 05:06:09 by vico              #+#    #+#             */
/*   Updated: 2021/12/09 22:05:01 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : max(n)
{
}

Span::Span(Span const &copy)
{
	*this = copy;
}

Span::~Span()
{
}

void	Span::addNumber(int nb)
{
	if (this->data.size() >= this->max)
		throw Span::MaxSizeReached();
	this->data.push_back(nb);
}

void	Span::addIterable(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	if (ite - it + this->data.size() > this->max)
		throw Span::MaxSizeReached();
	while (it != ite)
	{
		this->data.push_back(*it);
		it++;
	}
}

int	Span::shortestSpan() const
{
	int		smallest(-1);
	
	if (this->data.size() < 2)
		throw Span::NotEnoughNumbers();
	for (std::vector<int>::const_iterator i = this->data.begin(); i != this->data.end(); i++)
	{
		for (std::vector<int>::const_iterator j = this->data.begin(); j != this->data.end(); j++)
		{
			if ((i != j && *i > *j) && (*i - *j < smallest || smallest == -1))
				smallest = *i - *j;
			else if ((i != j && *j >= *i) && (*j - *i < smallest || smallest == -1))
				smallest = *j - *i;
		}
	}
	return smallest;
}

int	Span::longestSpan() const
{
	if (this->data.size() < 2)
		throw Span::NotEnoughNumbers();
	return (*std::max_element(this->data.begin(), this->data.end()) - *std::min_element(this->data.begin(), this->data.end()));
}

std::vector<int>	Span::GetData() const
{
	return this->data;
}

unsigned int	Span::GetMax() const
{
	return this->max;
}

void			Span::print() const
{
	for (std::vector<int>::const_iterator it = data.begin(); it != data.end(); it++)
		std::cout << *it << std::endl;
}

Span&	Span::operator=(Span const &obj)
{
	this->data = obj.GetData();
	this->max = obj.GetMax();
	return *this;
}
