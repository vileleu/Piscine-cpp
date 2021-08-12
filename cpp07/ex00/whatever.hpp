/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:31:09 by vico              #+#    #+#             */
/*   Updated: 2021/07/27 19:46:12 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	c(a);

	a = b;
	b = c;
}

template <typename T>
T		min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T		max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif
