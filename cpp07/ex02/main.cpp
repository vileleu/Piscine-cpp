/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:16:18 by vico              #+#    #+#             */
/*   Updated: 2021/07/27 21:30:11 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

using namespace std;

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
		//cout << numbers[i] << "\n";
    }
    delete [] mirror;//
    return 0;
}

/*int		main(void)
{
	try
	{
		Array<string> array(5);

		for (int i(0); i < array.size(); i++)
			array[i] = "oui";
		for (int i(0); i < array.size(); i++)
			cout << array[i] << "\n";

		cout << "\n";
		Array<int> array2(5);

		for (int i(0); i < array2.size(); i++)
			array2[i] = i + 10;
		for (int i(0); i < array2.size(); i++)
			cout << array2[i] << "\n";
		cout << array2[10] << "\n";
	}
	catch(exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}*/
