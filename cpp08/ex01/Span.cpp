/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 05:06:09 by vico              #+#    #+#             */
/*   Updated: 2021/08/03 06:17:07 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

using namespace std;

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

int	Span::shortestSpan() const
{
	int		smallest(-1);
	
	if (this->data.size() < 2)
		throw Span::NotEnoughNumbers();
	for (list<int>::const_iterator i = this->data.begin(); i != this->data.end(); i++)
	{
		for (list<int>::const_iterator j = this->data.begin(); j != this->data.end(); j++)
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
	return (*max_element(this->data.begin(), this->data.end()) - *min_element(this->data.begin(), this->data.end()));
}

list<int>	Span::GetData() const
{
	return this->data;
}

int			Span::GetMax() const
{
	return this->max;
}

Span&	Span::operator=(Span const &obj)
{
	this->data = obj.GetData();
	this->max = obj.GetMax();
	return *this;
}
