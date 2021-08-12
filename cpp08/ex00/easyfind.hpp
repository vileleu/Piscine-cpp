/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:39:03 by marvin            #+#    #+#             */
/*   Updated: 2021/07/31 19:39:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <array>
#include <vector>
	
class ThereIsNoOccurence : public std::exception
{
	public:

	virtual const char *what() const throw()
	{
		return "No Occurence";
	};
};

template <typename T>
int		easyfind(T	cont, int nb)
{
	if ((std::count(cont.begin(), cont.end(), nb)) > 0)
		return nb;
	throw ThereIsNoOccurence();
}

#endif
