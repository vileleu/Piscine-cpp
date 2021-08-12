/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:41:02 by vico              #+#    #+#             */
/*   Updated: 2021/07/09 19:55:42 by vico             ###   ########.fr       */
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
	~Animal();

	virtual void makeSound() const;
	std::string getType() const;

	Animal	&operator=(Animal const &obj);
};

#endif
