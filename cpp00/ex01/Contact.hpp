/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 03:34:21 by vico              #+#    #+#             */
/*   Updated: 2021/06/11 18:51:16 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "anuaire.hpp"

class Contact
{
    public:

	Contact();
	~Contact();
	void	fill_contact(std::string &fill, std::string print);
    void	add();
	void	print(int i);
	void	print_all();
	void	check_size(std::string print);

	int		empty;

    private:

	std::string first_name, last_name, nickname, login;
	std::string postal_address, email_address, phone_number;
	std::string birthday_date, favorite_meal, underwear_color, darkest_secret;
};

#endif