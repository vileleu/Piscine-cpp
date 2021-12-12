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

#define MAX_VAL 20

int main(int, char**)
{
    Array<int>  arra(MAX_VAL);
    Array<int>  copy(arra);

    srand(time(NULL));
    std::cout << "arra = ";
    for (int i = 0; i < MAX_VAL; i++)
    {
        arra[i] = rand() % 50;
        std::cout << arra[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "copy = ";
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;
    std::cout << "\n---copy overload---\n" << std::endl;
    copy = arra;
    std::cout << "arra = ";
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << arra[i] << " ";
    std::cout << std::endl;
    std::cout << "copy = ";
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << copy[i] << " ";
    }
    std::cout << std::endl;
    try
    {
        arra[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
