/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 03:34:18 by vico              #+#    #+#             */
/*   Updated: 2021/06/11 18:53:01 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

using namespace std;

Contact::Contact() : first_name("vide"), last_name("vide"), nickname("vide"), login("vide"), postal_address("vide"), 
						email_address("vide"), phone_number("vide"), birthday_date("vide"), favorite_meal("vide"), 
						underwear_color("vide"), darkest_secret("vide"), empty(1)
{
}

Contact::~Contact()
{
    /* Destructeur : Rien à mettre car pas d'allocations */
}

void	Contact::fill_contact(string &fill, string print)
{
	cout << print << "?\n";
    do
    {
		getline(cin, fill);
		if (fill == "")
			cout << "You need to write something\n";
    }
	while (fill == "");
}

void	Contact::add()
{
	fill_contact(first_name, "first name");
	fill_contact(last_name, "last name");
	fill_contact(nickname, "nickname");
	fill_contact(login, "login");
	fill_contact(postal_address, "postal address");
	fill_contact(email_address, "email address");
	fill_contact(phone_number, "phone number");
	fill_contact(birthday_date, "birthday date");
	fill_contact(favorite_meal, "favorite meal");
	fill_contact(underwear_color, "underwear color");
	fill_contact(darkest_secret, "darkest secret");
	empty = 0;
}

void	Contact::check_size(string print)
{
	int		i(0);

	if (print.size() > 10)
	{
		i = 0;
		cout << "|";
		while (i < 9)
			cout << print[i++];
		cout << ".";
	}
	else
	{
		i = 10;
		cout << "|";
		while (i-- > print.size())
			cout << " ";
		cout << print;
	}
}

void	Contact::print(int i)
{
	if (empty)
		return ;
	cout << "|         " << i;
	check_size(first_name);
	check_size(last_name);
	check_size(nickname);
	cout << "|\n";
}

void	Contact::print_all()
{
	cout << first_name << "\n";
	cout << last_name << "\n";
	cout << nickname << "\n";
	cout << login << "\n";
	cout << postal_address << "\n";
	cout << email_address << "\n";
	cout << phone_number << "\n";
	cout << birthday_date << "\n";
	cout << favorite_meal << "\n";
	cout << underwear_color << "\n";
	cout << darkest_secret << "\n";
}
