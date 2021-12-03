/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:52:58 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 20:46:34 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//Animal	animal;
	Cat		*cat;
	Cat		*cat2;

	cat = new Cat();
	cat2 = new Cat(*cat);
	std::cout << cat->getBrain() << "\n";
	std::cout << cat2->getBrain() << "\n";
	*cat2 = *cat;
	std::cout << cat->getBrain() << "\n";
	std::cout << cat2->getBrain() << "\n";
	delete cat;
	delete cat2;
	return 0;
}
