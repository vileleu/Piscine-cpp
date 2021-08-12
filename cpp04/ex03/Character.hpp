/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 05:45:19 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 02:12:18 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "interfaces.hpp"

class Character : public ICharacter
{
	public:

	Character(std::string const &name);
	Character(Character const &copy);
	~Character();

	virtual std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	Character	&operator=(Character const &obj);
};

#endif
