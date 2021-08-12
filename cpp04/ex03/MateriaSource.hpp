/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:54:06 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 02:35:26 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "interfaces.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	public:

	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);

	MateriaSource	&operator=(MateriaSource const &obj);
};

#endif
