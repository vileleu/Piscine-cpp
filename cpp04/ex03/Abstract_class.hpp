/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Abstract_class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 01:54:03 by vico              #+#    #+#             */
/*   Updated: 2021/11/27 05:19:26 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACT_CLASS_HPP
#define ABSTRACT_CLASS_HPP

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
	public:

	virtual ~ICharacter() {}
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class IMateriaSource
{
	public:
	
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif
