/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 19:42:24 by vico              #+#    #+#             */
/*   Updated: 2021/06/24 20:28:02 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:

	int					fixed;
	static const int	bits = 8;

	public:
	
	Fixed();
	Fixed(Fixed const &fix);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed&	operator=(Fixed const &);
	~Fixed();
};

#endif
