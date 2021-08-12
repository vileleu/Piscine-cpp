/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 20:34:06 by vico              #+#    #+#             */
/*   Updated: 2021/07/12 03:58:58 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <vector>

class Brain
{
	private:

	std::string	*ideas;

	public:

	Brain();
	Brain(Brain const &copy);
	~Brain();

	Brain	&operator=(Brain const &obj);
};

#endif
