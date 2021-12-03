/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 20:15:47 by vico              #+#    #+#             */
/*   Updated: 2021/07/27 21:27:15 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
	private:

	T	*t;
	unsigned int l;

	public:

	Array() : t(new T[0]), l(0)
	{
	}
	Array(unsigned int n) : t(new T[n]), l(n)
	{
	}
	Array(Array const &copy) : t(new T[copy.size()]), l(n)
	{
		this->t = new T[copy.size()];
		this->l = copy.size();
		for (unsigned int i(0); i < this->l; i++)
			this->t[i] = copy[i];
	}
	~Array()
	{
		delete[] this->t;
	}
	unsigned int	size() const
	{
		return this->l;
	}
	Array	&operator=(Array const &obj)
	{
		delete[] this->t;
		this->t = new T[obj.size()];
		this->l = obj.size();
		for (unsigned int i(0); i < this->l; i++)
			this->t[i] = obj[i];
		return *this;
	}
    T	&operator[](unsigned int n) const
	{
        if (n >= this->l)
            throw Array::OutOfRange();
        return (this->t[n]);
    }
	class OutOfRange : public std::exception
	{
		public:

		virtual const char *what() const throw()
		{
			return "Error : index is out of range";
		}
	};
};

#endif
