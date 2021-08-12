/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 19:44:13 by vico              #+#    #+#             */
/*   Updated: 2021/07/23 21:15:59 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

using namespace std;

int		ft_isdigit(int c);
int		ft_str_isdigit(char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		len_vir(int side, string arg);

int		error(string const &msg)
{
	cout << msg;
	return 0;
}

int		spec(string arg)
{
	if (arg == "+inf" || arg == "-inf" || arg == "+inff" || arg == "-inff" || arg == "nan" || arg == "nanf")
		return 1;
	return 0;
}

int		nan_spec(string arg)
{
	if (arg == "nan" || arg == "nanf")
		return 1;
	return 0;
}

int		inf_spec(string arg)
{
	if (arg == "+inf" || arg == "-inf" || arg == "+inff" || arg == "-inff")
		return 1;
	return 0;
}

void	print_char(string arg, double nb)
{
	cout << "char: ";
	if (spec(arg))
		cout << "impossible\n";
	else if (nb < 32 || nb > 126)
		cout << "Non displayable\n";
	else
		cout << "'" << static_cast<char>(nb) << "'\n";
}

void	print_int(string arg, double nb)
{
	cout << "int: ";
	if (nan_spec(arg))
		cout << "impossible\n";
	else if (nb > 0 && arg.length() == 10 && arg.compare("2147483647") > 0)
		cout << "+inf\n";
	else if (nb < 0 && arg.length() == 11 && arg.compare("-2147483648") > 0)
		cout << "-inf\n";
	else if ((nb > 0 && arg.length() > 10) || arg == "+inf" ||arg == "+inff")
		cout << "+inf\n";
	else if ((nb < 0 && arg.length() > 11) || arg == "-inf" ||arg == "-inff")
		cout << "-inf\n";
	else
		cout << static_cast<int>(nb) << "\n";
}

void	print_float(string arg, double nb)
{
	int		len(len_vir(0, arg));

	cout << "float: ";
	if (arg == "nan" || arg == "nanf")
		cout << "nanf\n";
	else if (nb > 0 && len_vir(0, arg) == 39 && ft_strncmp(arg.c_str(), "340282346638528859811704183484516925440", 39) > 0)
		cout << "+inff\n";
	else if (nb > 0 && !ft_strncmp(arg.c_str(), "340282346638528859811704183484516925440", 39) && len_vir(1, arg))
		cout << "+inff\n";
	else if (nb < 0 && len_vir(0, arg) == 40 && ft_strncmp(arg.c_str(), "-340282346638528859811704183484516925440", 40) > 0)
		cout << "-inff\n";
	else if (nb < 0 && !ft_strncmp(arg.c_str(), "-340282346638528859811704183484516925440", 40) && len_vir(1, arg))
		cout << "-inff\n";
	else if ((nb > 0 && len_vir(0, arg) > 39) || arg == "+inf" ||arg == "+inff")
		cout << "+inff\n";
	else if ((nb < 0 && len_vir(0, arg) > 40) || arg == "-inf" ||arg == "-inff")
		cout << "-inff\n";
	else
		cout << static_cast<float>(nb) << "f\n";
}

void	print_double(string arg, double nb)
{
	cout << "double: ";
	if (arg == "nan" || arg == "nanf")
		cout << "nan\n";
	else if (nb > 0 && len_vir(0, arg) == 309 && ft_strncmp(arg.c_str(), "179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368", 309) > 0)
		cout << "+inf\n";
	else if (nb > 0 && !ft_strncmp(arg.c_str(), "179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368", 309) && len_vir(1, arg))
		cout << "+inf\n";
	else if (nb < 0 && len_vir(0, arg) == 310 && ft_strncmp(arg.c_str(), "-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368", 310) > 0)
		cout << "-inf\n";
	else if (nb < 0 && !ft_strncmp(arg.c_str(), "-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368", 310) && len_vir(1, arg))
		cout << "-inf\n";
	else if ((nb > 0 && len_vir(0, arg) > 309) || arg == "+inf" ||arg == "+inff")
		cout << "+inf\n";
	else if ((nb < 0 && len_vir(0, arg) > 310) || arg == "-inf" ||arg == "-inff")
		cout << "-inf\n";
	else
		cout << static_cast<double>(nb) << "\n";
}

bool	parsing(char *arg)
{
	int		i(1);
	int		dat(1);

	if (!arg[0])
		return false;
	if (spec(arg))
		return true;
	if (!ft_isdigit(arg[0]) && arg[0] != '+' && arg[0] != '-' && arg[0] != '.' && arg[1])
		return false;
	if (arg[0] == '.')
		dat = 0;
	while (arg[i])
	{
		if (dat && arg[i] == '.')
			dat = 0;
		else if (!ft_isdigit(arg[i]))
			return false;
		i++;
	}
	return true;
}

int		main(int ac, char **av)
{
	double	nb;
	
	if (ac < 2 || ac > 2)
		return error("Need 1 argument!\n");
	if (!parsing(av[1]))
		return error("Need char, int, float or double!\n");
	if (ft_str_isdigit(av[1]))
		nb = stod(av[1]);
	else
		nb = av[1][0];
	print_char(av[1], nb);
	print_int(av[1], nb);
	print_float(av[1], nb);
	print_double(av[1], nb);
	return 0;
}