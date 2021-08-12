/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 20:29:02 by vico              #+#    #+#             */
/*   Updated: 2021/06/25 21:12:18 by vico             ###   ########.fr       */
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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed&	operator=(Fixed const &);
	~Fixed();
};

std::ostream&	operator<<(std::ostream &out, Fixed const &fix);

#endif