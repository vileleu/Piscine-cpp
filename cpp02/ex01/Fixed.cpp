/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:28:56 by vico              #+#    #+#             */
/*   Updated: 2021/06/25 21:12:03 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using namespace std;

Fixed::Fixed()
{
	fixed = 0;
	cout << "Default constructor called\n";
}

Fixed::Fixed(const int n)
{
	cout << "Int constructor called\n";
	fixed = n << bits;
}

Fixed::Fixed(const float n)
{
	cout << "Float constructor called\n";
	fixed = roundf(n * (1 << bits));
}

Fixed::Fixed(Fixed const &fix)
{
	cout << "Copy constructor called\n";
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
	return ((float)fixed / (1 << bits));
}

int  Fixed::toInt() const
{
	return (fixed / (1 << bits));
}

Fixed&	Fixed::operator=(Fixed const &fix)
{
	cout << "Assignation operator called\n";
	fixed = fix.getRawBits();
	return *this;
}

ostream&	operator<<(ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	cout << "Destructor called\n";
}