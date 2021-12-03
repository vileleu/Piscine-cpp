/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:43:21 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 14:09:25 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:

	std::string const	name;
	int const			g_sign;
	int const			g_exec;
	bool				sign;

	public:

	Form();
	Form(std::string name, int g_sign, int g_exec);
	Form(Form const &copy);
	~Form();

	std::string	GetName() const;
	int 		GetG_sign() const;
	int			GetG_exec() const;
	bool		GetSign() const;
	void		beSigned(Bureaucrat const &obj);

	Form  &operator=(const Form &cpy);

	class GradeTooHighException : public std::exception
	{
		public:

		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:

		virtual const char *what() const throw();
	};
};

std::ostream		&operator<<(std::ostream &out, Form const &obj);

#endif
