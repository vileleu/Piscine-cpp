/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 05:15:11 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 04:42:56 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		s = "HI THIS IS BRAIN";
	std::string		*stringPTR = &s;
	std::string&	stringREF(s);

	std::cout << "string : " << &s << "\npointeur : " << stringPTR << "\nreference : " << &stringREF << "\n";
	return 0;
}