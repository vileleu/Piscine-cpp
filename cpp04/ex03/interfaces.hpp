/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interfaces.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 01:54:03 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 02:47:23 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACES_HPP
#define INTERFACES_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	protected:

	std::string	type;

	public:

	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	virtual	~AMateria();

	std::string const	&getType() const;
	virtual	AMateria* clone() const = 0;
	virtual void	use(ICharacter &target);

	AMateria	&operator=(AMateria const &obj);
};

class ICharacter
{
	protected:

	AMateria	*tab[4];
	std::string	name;

	public:

	virtual ~ICharacter() {}
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class IMateriaSource
{
	protected:

	AMateria	*learn[4];

	public:
	
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif
