/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 03:34:18 by vico              #+#    #+#             */
/*   Updated: 2021/11/16 19:12:12 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : first_name("vide"), last_name("vide"), nickname("vide"), phone_number("vide"), darkest_secret("vide"), empty(1)
{
}

Contact::~Contact()
{
    /* Destructeur : Rien à mettre car pas d'allocations */
}

int		Contact::fill_contact(std::string &fill, std::string print)
{
	std::cout << print << "?\n";
    do
    {
		if (!getline(std::cin, fill))
		{
			std::cerr << "Error: EOF reached\n";
			return 0;
		}
		if (fill == "")
			std::cout << "You need to write something\n";
    }
	while (fill == "");
	return 1;
}

int		Contact::add()
{
	if (!fill_contact(first_name, "first name"))
		return 0;
	if (!fill_contact(last_name, "last name"))
		return 0;
	if (!fill_contact(nickname, "nickname"))
		return 0;
	if (!fill_contact(phone_number, "phone number"))
		return 0;
	if (!fill_contact(darkest_secret, "darkest secret"))
		return 0;
	this->set_empty(0);
	return 1;
}

void	Contact::check_size(std::string print)
{
	int		i(0);

	if (print.size() > 10)
	{
		std::cout << "|";
		std::cout << print.substr(0, 9);
		std::cout << ".";
	}
	else
	{
		i = 10;
		std::cout << "|";
		while (i-- > print.size())
			std::cout << " ";
		std::cout << print;
	}
}

void	Contact::print(int i)
{
	if (is_empty())
		return ;
	std::cout << "|         " << i;
	check_size(first_name);
	check_size(last_name);
	check_size(nickname);
	std::cout << "|\n";
}

void	Contact::print_all()
{
	std::cout << first_name << "\n";
	std::cout << last_name << "\n";
	std::cout << nickname << "\n";
	std::cout << phone_number << "\n";
	std::cout << darkest_secret << "\n";
}

int		Contact::is_empty()
{
	return this->empty;
}

void	Contact::set_empty(int n)
{
	this->empty = n;
}
