/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:28:56 by vico              #+#    #+#             */
/*   Updated: 2021/11/20 21:03:53 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	fixed = n * (1 << bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	fixed = roundf(n * (1 << bits));
}

Fixed::Fixed(Fixed const &fix)
{
	std::cout << "Copy constructor called\n";
	*this = fix;
}

int		Fixed::getRawBits(void) const
{
	return fixed;
}

void	Fixed::setRawBits(int const raw)
{
	fixed = raw;
}

float  Fixed::toFloat() const
{
	return ((float)fixed / (float)(1 << bits));
}

int  Fixed::toInt() const
{
	//return (fixed / (1 << bits));
	return (fixed >> bits);
}

Fixed&	Fixed::operator=(Fixed const &fix)
{
	std::cout << "Assignation operator called\n";
	fixed = fix.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
