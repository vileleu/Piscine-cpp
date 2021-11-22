/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:29:09 by vico              #+#    #+#             */
/*   Updated: 2021/11/16 19:12:07 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

Annuaire::Annuaire()
{
}

Annuaire::~Annuaire()
{
    /* Destructeur : Rien à mettre car pas d'allocations */
}

int		Annuaire::add_Contact()
{
	int		i(0);

	while (i < 8 && !(annuaire[i].is_empty()))
		i++;
	if (i == 8)
	{
		std::cout << "there is no more space in phonebook!\n";
		return 1;
	}
	return annuaire[i].add();
}

int		Annuaire::search_Contact()
{
	std::string	answer("");
	
	if (annuaire[0].is_empty())
	{
		std::cout << "there is no contact\n";
		return 1;
	}
	for (int i(0) ; i < 8 ; i++)
		annuaire[i].print(i + 1);
	std::cout << "which contact would you like to see? (1-8)\n";
    do
    {
		if (!getline(std::cin, answer))
		{
			std::cerr << "Error: EOF reached\n";
			return 0;
		}
		if (answer == "" || answer.size() != 1 || answer[0] < '1' || answer[0] > '8')
			std::cout << "Wrong input : you must write a number between 1 and 8\n";
    }
	while (answer == "" || answer.size() != 1 || answer[0] < '1' || answer[0] > '8');
	if (annuaire[int(answer[0] - 49)].is_empty())
		std::cout << "this contact is empty...\n";
	else
		annuaire[int(answer[0] - 49)].print_all();
	return 1;
}
