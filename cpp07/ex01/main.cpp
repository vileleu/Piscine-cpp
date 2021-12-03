/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:44:26 by vico              #+#    #+#             */
/*   Updated: 2021/07/27 20:13:09 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(void)
{
	float	tab[] = {10.7, 76.9, 65.7, 26.03, 24.76};
	
	iter(tab, 5, &print);

	std::string	tab2[] = {"Bonjour", "mimolette", "coquille", "serpent"};

	iter(tab2, 4, &print);
	return 0;
}
