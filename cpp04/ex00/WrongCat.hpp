/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:18:35 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 19:24:25 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:

	WrongCat();
	WrongCat(WrongCat const &copy);
	~WrongCat();

	void makeSound() const;

	WrongCat	&operator=(WrongCat const &obj);
};

#endif
