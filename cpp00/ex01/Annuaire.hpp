/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:50:58 by vico              #+#    #+#             */
/*   Updated: 2021/11/15 18:50:05 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_HPP
#define ANNUAIRE_HPP

#include "Contact.hpp"

class Annuaire
{
    public:

	Annuaire();
	~Annuaire();
	int		add_Contact();
	int		search_Contact();

    private:

	Contact 	annuaire[8];
};

#endif