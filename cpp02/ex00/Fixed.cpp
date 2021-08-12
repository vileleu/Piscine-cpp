/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:42:00 by vico              #+#    #+#             */
/*   Updated: 2021/06/24 20:24:43 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using namespace std;

Fixed::Fixed()
{
	fixed = 0;
	cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &fix)
{
	cout << "Copy constructor called\n";
	*this = fix;
}

int		Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called\n";
	return fixed;
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called\n";
	fixed = raw;
}

Fixed&	Fixed::operator=(Fixed const &fix)
{
	cout << "Assignation operator called\n";
	fixed = fix.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	cout << "Destructor called\n";
}
