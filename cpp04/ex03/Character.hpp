/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 05:45:19 by vico              #+#    #+#             */
/*   Updated: 2021/11/27 05:19:38 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Abstract_class.hpp"

class Character : public ICharacter
{
	private:

	AMateria	*_tab[4];
	int			_size;
	std::string	_name;

	public:

	Character(std::string const &name);
	Character(Character const &copy);
	virtual	~Character();

	unsigned int	getSize() const;
	AMateria		*getAMateria(int idx) const;
	virtual std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	Character	&operator=(Character const &obj);
};

#endif
