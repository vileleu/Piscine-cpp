/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 06:34:59 by vico              #+#    #+#             */
/*   Updated: 2021/11/30 13:35:46 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "\n-------------------------------\n\n";

		IMateriaSource	*src = new MateriaSource();
		Character		john("john");
		AMateria		*tmp;

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		tmp = src->createMateria("ice");
		john.equip(tmp);
		tmp = src->createMateria("cure");
		john.equip(tmp);

		ICharacter* davis = new Character("davis");

		john.use(0, *davis);
		john.use(0, *davis);
		davis->equip(src->createMateria("cure"));
		davis->equip(new Ice());
		davis->equip(new Ice());
		davis->equip(new Ice());
		davis->use(0, *davis);
		davis->use(0, *davis);
		davis->use(1, john);
		delete davis;
		delete src;
	}
	return 0;
}
