/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:54:06 by vico              #+#    #+#             */
/*   Updated: 2021/11/27 05:19:55 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Abstract_class.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	AMateria	*_learn[4];
	int			_size;

	public:

	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	~MateriaSource();

	int					getSize() const;
	AMateria			*getAMateria(int idx) const;
	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);

	MateriaSource	&operator=(MateriaSource const &obj);
};

#endif
