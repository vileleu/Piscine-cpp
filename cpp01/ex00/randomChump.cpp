/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 21:36:15 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 21:47:12 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

void	randomChump(string name)
{
	Zombie	zombie(name);

	zombie.announce();
	return ;
}
