/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 05:15:48 by vico              #+#    #+#             */
/*   Updated: 2021/07/14 02:07:47 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "interfaces.hpp"

class Ice : public AMateria
{
	private:

	public:

	Ice();
	Ice(Ice const &copy);
	virtual	~Ice();

	virtual	AMateria* clone() const;
	virtual void	use(ICharacter &target);

	AMateria	&operator=(AMateria const &obj);
};

#endif
