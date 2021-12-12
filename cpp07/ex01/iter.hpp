/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:44:56 by vico              #+#    #+#             */
/*   Updated: 2021/07/27 20:10:37 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	print(T &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	iter(T *adr, int l, void (*fct)(T &a))
{
	for (int i(0); i < l; i++)
		fct(adr[i]);
}

#endif
