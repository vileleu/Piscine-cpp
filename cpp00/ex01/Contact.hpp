/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 03:34:21 by vico              #+#    #+#             */
/*   Updated: 2021/11/15 18:49:57 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <unistd.h>

class Contact
{
    public:

	Contact();
	~Contact();
	int		fill_contact(std::string &fill, std::string print);
    int		add();
	void	print(int i);
	void	print_all();
	void	check_size(std::string print);
	int		is_empty();
	void	set_empty(int n);

    private:

	std::string first_name, last_name, nickname;
	std::string phone_number, darkest_secret;
	int			empty;
};

#endif