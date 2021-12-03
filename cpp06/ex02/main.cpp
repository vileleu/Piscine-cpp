/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:07:09 by vico              #+#    #+#             */
/*   Updated: 2021/11/29 16:26:54 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int		n(rand() % 3);

	if (n == 0)
		return new A();
	else if (n == 1)
		return new B();
	else
		return new C();
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	return ;
}

void	identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}

int		main(void)
{
	srand(time(NULL));

	Base	*base1;
	Base	*base2;
	Base	*base3;

	base1 = generate();
	base2 = generate();
	base3 = generate();
	identify_from_reference(*base1);
	identify_from_reference(*base2);
	identify_from_reference(*base3);
	delete base1;
	delete base2;
	delete base3;
	return 0;
}
