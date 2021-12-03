/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:56:52 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 20:09:01 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

	Brain	*brain;

	public:

	Cat();
	Cat(Cat const &copy);
	virtual ~Cat();

	virtual void makeSound() const;
	Brain	*getBrain() const;

	Cat	&operator=(Cat const &obj);
};

#endif
