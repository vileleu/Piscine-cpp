/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:02:59 by vico              #+#    #+#             */
/*   Updated: 2021/12/03 02:28:16 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string s) : _s(s), _nb(0)
{
	if (_s.length() > 1 && _s[_s.length() - 1] == 'f')
	{
		if (isdigit(_s[0]) || (_s[0] == '+' && isdigit(_s[1])) || (_s[0] == '-' && isdigit(_s[1])))
			_s.erase(_s.length() - 1);
	}
}

Convert::Convert(Convert const &copy)
{
	*this = copy;
}

Convert::~Convert()
{
}

int		Convert::init()
{
	if (!parsing())
		return Convert::error("Need char, int, float or double!\n");
	if (ft_str_isdigit())
		_nb = std::atof(_s.c_str());
	else
		_nb = _s[0];
	return (1);
}

int		Convert::error(std::string const &msg)
{
	std::cerr << msg;
	return 0;
}

std::string	Convert::getString() const
{
	return this->_s;
}

double	Convert::getNb() const
{
	return this->_nb;
}

void	Convert::setString(std::string s)
{
	this->_s = s;
}

void	Convert::setNb(double nb)
{
	this->_nb = nb;
}

int		Convert::spec()
{
	if (_s == "+inf" || _s == "-inf" || _s == "+inff" || _s == "-inff" || _s == "nan" || _s == "nanf")
		return 1;
	return 0;
}

int		Convert::nan_spec()
{
	if (_s == "nan" || _s == "nanf")
		return 1;
	return 0;
}

int		Convert::inf_spec()
{
	if (_s == "+inf" || _s == "-inf" || _s == "+inff" || _s == "-inff")
		return 1;
	return 0;
}

bool	Convert::parsing()
{
	int		i(1);
	int		dat(1);

	if (!_s[0])
		return false;
	if (spec())
		return true;
	if (!isdigit(_s[0]) && _s[0] != '+' && _s[0] != '-' && _s[0] != '.' && _s[1])
		return false;
	if (_s[0] == '.')
		dat = 0;
	while (_s[i])
	{
		if (dat && _s[i] == '.')
			dat = 0;
		else if (!isdigit(_s[i]))
			return false;
		i++;
	}
	return true;
}

int		Convert::ft_str_isdigit()
{
	int		i(0);
	int		dat(1);

	if ((_s[i] == '+' || _s[i] == '-') && _s[i + 1] == '\0')
		return 0;
	while (_s[i])
	{
		if (!i && (_s[i] == '+' || _s[i] == '-'))
			i++;
		else if (dat && _s[i] == '.')
		{
			dat = 0;
			i++;
		}
		else if (!isdigit(_s[i]))
			return 0;
		else
			i++;
	}
	return 1;
}

void	Convert::print_char()
{
	std::cout << "char: ";
	if (spec())
		std::cout << "impossible\n";
	else if (_nb < 32 || _nb > 126)
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << static_cast<char>(_nb) << "'\n";
}

void	Convert::print_int()
{
	std::cout << "int: ";
	if (nan_spec())
		std::cout << "impossible\n";
	else if (_nb > 0 && _nb > std::numeric_limits<int>::max())
		std::cout << "+inf\n";
	else if (_nb < 0 && _nb < std::numeric_limits<int>::min())
		std::cout << "-inf\n";
	else
		std::cout << static_cast<int>(_nb) << "\n";
}

void	Convert::print_float()
{
	std::cout << "float: ";
	if (_s == "nan" || _s == "nanf")
		std::cout << "nanf\n";
	else if (_nb > 0 && _nb > std::numeric_limits<float>::max())
		std::cout << "+inff\n";
	else if (_nb < 0 && _nb < std::numeric_limits<float>::max() * -1)
		std::cout << "-inff\n";
	else
		std::cout << static_cast<float>(_nb) << "f\n";
}

void	Convert::print_double()
{
	std::cout << "double: ";
	if (_s == "nan" || _s == "nanf")
		std::cout << "nan\n";
	else if (_nb > 0 && _nb > std::numeric_limits<double>::max())
		std::cout << "+inf\n";
	else if (_nb < 0 && _nb < std::numeric_limits<double>::max() * -1)
		std::cout << "-inf\n";
	else
		std::cout << _nb << "\n";
}

Convert&	Convert::operator=(Convert const &obj)
{
	this->_s = obj.getString();
	this->_nb = obj.getNb();
	return *this;
}
