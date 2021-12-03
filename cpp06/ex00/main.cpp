/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:44:13 by vico              #+#    #+#             */
/*   Updated: 2021/12/03 02:20:42 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
		return Convert::error("Need 1 argument!\n");
	Convert	convert(av[1]);

	if (!convert.init())
		return (0);
	convert.print_char();
	convert.print_int();
	convert.print_float();
	convert.print_double();
	return 0;
}
