/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:52:58 by vico              #+#    #+#             */
/*   Updated: 2021/07/12 04:48:26 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

using namespace std;

int main()
{
	const Animal	*array[100];

	for (int i(0); i < 50; i++)
		array[i] = new Dog();
	for (int i(50); i < 100; i++)
		array[i] = new Cat();
	for (int i(0); i < 100; i++)
		delete array[i];
	return 0;
}
