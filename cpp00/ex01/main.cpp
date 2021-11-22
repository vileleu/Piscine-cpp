/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:38:40 by vico              #+#    #+#             */
/*   Updated: 2021/11/16 19:12:19 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.hpp"

int		main()
{
	Annuaire	annuaire;
	std::string	answer("vide");
	int		exit(1);

	while (exit)
	{ 
    	std::cout << "ADD, SEARCH or EXIT?" << std::endl;
    	if (!getline(std::cin, answer))
		{
			std::cerr << "Error: EOF reached\n";
			break ;
		}
		if (answer == "ADD")
		{
			if (!annuaire.add_Contact())
				exit = 0;
		}
		else if (answer == "SEARCH")
		{
			if (!annuaire.search_Contact())
				exit = 0;
		}
		else if (answer == "EXIT")
			exit = 0;
		else
			std::cout << "Command unknown\n";
	}
	return 0;
}