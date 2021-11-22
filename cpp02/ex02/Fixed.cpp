/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:28:56 by vico              #+#    #+#             */
/*   Updated: 2021/11/20 21:06:57 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed = 0;
}

Fixed::Fixed(const int n)
{
	fixed = n * (1 << bits);
}

Fixed::Fixed(const float n)
{
	fixed = roundf(n * (1 << bits));
}

Fixed::Fixed(Fixed const &fix)
{
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
	return ((float)this->fixed / (float)(1 << this->bits));
}

int  Fixed::toInt() const
{
	return (fixed / (1 << bits));
}

/*
**Operateurs
*/

Fixed&	Fixed::operator=(Fixed const &fix)
{
	fixed = fix.getRawBits();
	return *this;
}

Fixed Fixed::operator++()
{
	fixed++;
	return (*this);
}

Fixed Fixed::operator--()
{
	fixed--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	
	++(*this);
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	
	--(*this);
	return (tmp);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fix)
{
    out << fix.toFloat();
    return (out);
}

Fixed	Fixed::operator+(Fixed const &fix) const
{
	Fixed	tmp(fix.toFloat() + this->toFloat());
	
	return tmp;
}

Fixed	Fixed::operator-(Fixed const &fix) const
{
	Fixed	tmp(fix.toFloat() - this->toFloat());
	
	return tmp;
}

Fixed	Fixed::operator*(Fixed const &fix) const
{
	Fixed	tmp(fix.toFloat() * this->toFloat());
	
	return tmp;
}

Fixed	Fixed::operator/(Fixed const &fix) const
{
	Fixed	tmp(fix.toFloat() / this->toFloat());
	
	return tmp;
}

bool	Fixed::operator<(Fixed const &fix) const
{
	if (this->getRawBits() < fix.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>(Fixed const &fix) const
{
	if (this->getRawBits() > fix.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const &fix) const
{
	if (this->getRawBits() <= fix.getRawBits() )
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const &fix) const
{
	if (this->getRawBits() >= fix.getRawBits() )
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const &fix) const
{
	if (this->getRawBits() == fix.getRawBits() )
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const &fix) const
{
	if (this->getRawBits() != fix.getRawBits() )
		return true;
	return false;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

Fixed::~Fixed()
{
}