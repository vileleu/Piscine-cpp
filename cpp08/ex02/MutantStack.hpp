/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 06:22:48 by vico              #+#    #+#             */
/*   Updated: 2021/08/11 15:45:17 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
	public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack const &copy)
	{
		*this = copy;
	};
	virtual ~MutantStack() {};
	MutantStack	&operator=(const std::stack<T> &copy)
	{
		std::stack<T>::c::operator=(copy);
		return (*this);
	}
	iterator	begin()
	{
		return std::stack<T, Container>::c.begin();
	};
	iterator	end()
	{
		return std::stack<T, Container>::c.end();
	};
	reverse_iterator	rbegin()
	{
		return std::stack<T, Container>::c.rbegin();
	};
	reverse_iterator	rend()
	{
		return std::stack<T, Container>::c.rend();
	};
};

#endif
