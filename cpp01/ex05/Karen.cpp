/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 02:41:52 by vico              #+#    #+#             */
/*   Updated: 2021/07/19 00:08:54 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

using namespace std;

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug(void)
{
	cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void	Karen::info(void)
{
	cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void	Karen::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void	Karen::error(void)
{
	cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void	Karen::complain(std::string level)
{
	KarenMemFn	array[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	(this->*array[(level.c_str())[0] - '0'])();
}
