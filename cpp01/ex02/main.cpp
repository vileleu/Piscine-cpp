/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 05:15:11 by vico              #+#    #+#             */
/*   Updated: 2021/06/16 05:20:22 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int		main(void)
{
	string	s = "HI THIS IS BRAIN";
	string	*ptr = &s;
	string&	ref(s);

	cout << "string : " << s << "\npointeur : " << *ptr << "\nreference : " << ref << "\n";
	return 0;
}