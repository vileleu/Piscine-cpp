/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:29:02 by vico              #+#    #+#             */
/*   Updated: 2021/06/26 03:39:21 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:

	int					fixed;
	static const int	bits = 8;

	public:
	
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(Fixed const &fix);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
	Fixed&			operator=(Fixed const &fix);

	Fixed			operator+(Fixed const &fix) const;
	Fixed			operator-(Fixed const &fix) const;
	Fixed			operator*(Fixed const &fix) const;
	Fixed			operator/(Fixed const &fix) const;

	bool			operator<(Fixed const &fix) const;
	bool			operator>(Fixed const &fix) const;
	bool			operator<=(Fixed const &fix) const;
	bool			operator>=(Fixed const &fix) const;
	bool			operator==(Fixed const &fix) const;
	bool			operator!=(Fixed const &fix) const;

	Fixed			operator++();
	Fixed			operator--();
	Fixed			operator++(int);
	Fixed			operator--(int);
	
	static Fixed&		min(Fixed& a, Fixed& b);
	static Fixed&		max(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
	~Fixed();
};

std::ostream		&operator<<(std::ostream &out, Fixed const &fix);

#endif