/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:38:18 by vileleu           #+#    #+#             */
/*   Updated: 2021/07/23 20:54:20 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int		len_vir(int side, string arg)
{
	int		len(0);
	int		aft(0);
	int		ok(0);

	while (arg[len] && arg[len] != '.')
		len++;
	if (side)
	{
		while (arg[len + aft])
		{
			aft++;
			if (arg[len + aft] && arg[len + aft] != '0')
				ok = 1;
		}
		len = aft;
		if (len)
			len--;
		if (!ok)
			len = 0;
	}
	return len;
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		if (i == n - 1)
			return (0);
		i++;
	}
	if (str1[i] == str2[i])
		return (0);
	return (str1[i] - str2[i]);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_isdigit(char *s)
{
	int		i(0);
	int		dat(1);

	if ((s[i] == '+' || s[i] == '-') && s[i + 1] == '\0')
		return 0;
	while (s[i])
	{
		if (!i && (s[i] == '+' || s[i] == '-'))
			i++;
		else if (dat && s[i] == '.')
		{
			dat = 0;
			i++;
		}
		else if (!ft_isdigit(s[i]))
			return 0;
		else
			i++;
	}
	return 1;
}
