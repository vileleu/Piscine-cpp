/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:30:45 by vico              #+#    #+#             */
/*   Updated: 2021/07/27 19:42:10 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

using namespace std;

int		main(void)
{
	double a = 2;
	double b = 3;

	cout << "a = " << a << ", b = " << b << endl;
	::swap( a, b );
	cout << "swap :\na = " << a << ", b = " << b << endl;
	cout << "min( a, b ) = " << ::min( a, b ) << endl;
	cout << "max( a, b ) = " << ::max( a, b ) << endl;

	string c = "chaine1";
	string d = "chaine2";

	cout << "c = " << c << ", d = " << d << endl;
	::swap(c, d);
	cout << "swap :\nc = " << c << ", d = " << d << endl;
	cout << "min( c, d ) = " << ::min( c, d ) << endl;
	cout << "max( c, d ) = " << ::max( c, d ) << endl;
	return 0;
}