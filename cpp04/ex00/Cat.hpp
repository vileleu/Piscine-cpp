/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:56:52 by vico              #+#    #+#             */
/*   Updated: 2021/07/09 18:57:46 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:

	Cat();
	Cat(Cat const &copy);
	~Cat();

	virtual void makeSound() const;

	Cat	&operator=(Cat const &obj);
};

#endif
