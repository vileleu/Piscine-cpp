/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:46:33 by vico              #+#    #+#             */
/*   Updated: 2021/11/29 14:48:42 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <stdint.h>

struct	Data
{
	std::string	name;
	int		age;
	float	size;
};

uintptr_t	serialize(Data* ptr)
{
	srand(time(NULL));
	std::string	tab_s[] = {"Danny", "Georges", "Anakin", "Renée", "Claude"};
	int		tab_i[] = {18, 20, 45, 86, 4};
	float	tab_f[] = {1.75, 1.40, 2.10, 1.66, 1.20};

	ptr->name = tab_s[rand() % 5];
	ptr->age = tab_i[rand() % 5];
	ptr->size = tab_f[rand() % 5];
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int		main(void)
{
	Data	*data;

	data = deserialize(serialize(new Data()));
	std::cout << "name = " << data->name << ", age = " << data->age << ", size = " << data->size << "\n";
	delete data;
	return 0;
}
