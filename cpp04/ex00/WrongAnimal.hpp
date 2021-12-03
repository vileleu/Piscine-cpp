/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:18:50 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 19:25:06 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:

	std::string	type;

	public:

	WrongAnimal();
	WrongAnimal(std::string	type);
	WrongAnimal(WrongAnimal const &copy);
	virtual	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;

	WrongAnimal	&operator=(WrongAnimal const &obj);
};

#endif
