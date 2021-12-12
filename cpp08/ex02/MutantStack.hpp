/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 06:22:48 by vico              #+#    #+#             */
/*   Updated: 2021/12/08 05:48:57 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	MutantStack() : std::stack<T>()
	{
	};
	MutantStack(MutantStack const &copy) : std::stack<T>(copy)
	{
	};
	virtual ~MutantStack()
	{
	};
	MutantStack	&operator=(const std::stack<T> &copy)
	{
		std::stack<T>::operator=(copy);
		return (*this);
	}
	iterator	begin()
	{
		return std::stack<T>::c.begin();
	};
	iterator	end()
	{
		return std::stack<T>::c.end();
	};
	reverse_iterator	rbegin()
	{
		return std::stack<T>::c.rbegin();
	};
	reverse_iterator	rend()
	{
		return std::stack<T>::c.rend();
	};
};

#endif
