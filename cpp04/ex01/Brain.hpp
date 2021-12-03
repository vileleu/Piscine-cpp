/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 20:34:06 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 20:02:41 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <vector>

class Brain
{
	private:

	std::string	ideas[100];

	public:

	Brain();
	Brain(Brain const &copy);
	~Brain();

	std::string*	getIdeas();

	Brain	&operator=(Brain const &obj);
};

#endif
