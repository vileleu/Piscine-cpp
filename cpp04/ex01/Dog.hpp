/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:00:12 by vico              #+#    #+#             */
/*   Updated: 2021/07/12 04:35:36 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

	Brain	*brain;

	public:

	Dog();
	Dog(Dog const &copy);
	virtual ~Dog();

	virtual void makeSound() const;

	Dog	&operator=(Dog const &obj);
};

#endif
