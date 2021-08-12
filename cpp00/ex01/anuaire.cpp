/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anuaire.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:29:09 by vico              #+#    #+#             */
/*   Updated: 2021/06/10 20:18:00 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "anuaire.hpp"

using namespace std;

void	add_Contact(Contact anuaire[8])
{
	int		i(0);

	while (i < 8 && !(anuaire[i].empty))
		i++;
	if (i == 8)
	{
		cout << "there is no more space in phonebook!\n";
		return ;
	}
	anuaire[i].add();
}

void	search_Contact(Contact anuaire[8])
{
	string	answer("");
	
	if (anuaire[0].empty)
	{
		cout << "there is no contact\n";
		return ;
	}
	for (int i(0) ; i < 8 ; i++)
		anuaire[i].print(i + 1);
	cout << "which contact would you like to see? (1-8)\n";
    do
    {
		getline(cin, answer);
		if (answer == "" || answer.size() != 1 || answer[0] < '1' || answer[0] > '8')
			cout << "Wrong input : you must write a number between 1 and 8\n";
    }
	while (answer == "" || answer.size() != 1 || answer[0] < '1' || answer[0] > '8');
	if (anuaire[int(answer[0] - 49)].empty)
		cout << "this contact is empty...\n";
	else
		anuaire[int(answer[0] - 49)].print_all();
}

int		main()
{
	Contact anuaire[8];
	string	answer("vide");
	int		exit(1);

	while (exit)
	{ 
    	cout << "ADD, SEARCH or EXIT?" << endl;
    	getline(cin, answer);
		if (answer == "ADD")
			add_Contact(anuaire);
		else if (answer == "SEARCH")
			search_Contact(anuaire);
		else if (answer == "EXIT")
			exit = 0;
		else
			cout << "Commande introuvable\n";
	}
	return 0;
}