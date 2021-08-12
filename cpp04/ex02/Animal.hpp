/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:41:02 by vico              #+#    #+#             */
/*   Updated: 2021/07/13 03:12:35 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:

	std::string	type;

	public:

	Animal();
	Animal(std::string	type);
	Animal(Animal const &copy);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	std::string getType() const;

	Animal	&operator=(Animal const &obj);
};

#endif
