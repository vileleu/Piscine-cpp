/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 05:06:13 by vico              #+#    #+#             */
/*   Updated: 2021/12/09 21:41:15 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:

	std::vector<int>	data;
	unsigned int	max;

	public:

	Span(unsigned int n);
	Span(Span const &copy);
	~Span();

	void			addNumber(int nb);
	void			addIterable(std::vector<int>::iterator it, std::vector<int>::iterator ite);
	int				shortestSpan() const;
	int				longestSpan() const;
	std::vector<int>	GetData() const;
	unsigned int	GetMax() const;
	void			print() const;

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
	class BadArguments : public std::exception
	{
		public:
		
		virtual const char* what() const throw()
		{
			return "Wrong arguments in AddIterable";
		}
	};
};

#endif
