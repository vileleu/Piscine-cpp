/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:03:03 by vico              #+#    #+#             */
/*   Updated: 2021/12/03 02:20:43 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits>

class Convert
{
	private:

	std::string	_s;
	double		_nb;
	
	int		spec();
	int		nan_spec();
	int		inf_spec();

	bool	parsing();
	int	ft_str_isdigit();

	public:

	Convert();
	Convert(std::string s);
	Convert(Convert const &copy);
	~Convert();

	int		init();

	std::string	getString() const;
	double	getNb() const;
	void	setString(std::string s);
	void	setNb(double nb);

	void	print_char();
	void	print_int();
	void	print_float();
	void	print_double();

	Convert	&operator=(Convert const &obj);

	static int	error(std::string const &msg);
};

#endif
