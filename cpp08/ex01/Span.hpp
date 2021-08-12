/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 05:06:13 by vico              #+#    #+#             */
/*   Updated: 2021/08/03 06:16:31 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>

class Span
{
	private:

	std::list<int>	data;
	int				max;

	public:

	Span(unsigned int n);
	Span(Span const &copy);
	~Span();

	void			addNumber(int nb);
	int				shortestSpan() const;
	int				longestSpan() const;
	std::list<int>	GetData() const;
	int				GetMax() const;

	Span			&operator=(Span const &obj);
	
	class MaxSizeReached : public std::exception
	{
		public:
		
		virtual const char* what() const throw()
		{
			return "You reached max size of data";
		}
	};
	class NotEnoughNumbers : public std::exception
	{
		public:
		
		virtual const char* what() const throw()
		{
			return "There is not enough numbers in data";
		}
	};
};

#endif
