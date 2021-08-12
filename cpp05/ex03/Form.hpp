/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:43:21 by vico              #+#    #+#             */
/*   Updated: 2021/07/19 00:30:49 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:

	std::string	target;
	std::string const	name;
	int const			g_sign;
	int const			g_exec;
	bool				sign;

	public:

	Form(std::string name, int g_sign, int g_exec);
	Form(Form const &copy);
	virtual	~Form();

	std::string	GetName() const;
	int 		GetG_sign() const;
	int			GetG_exec() const;
	bool		GetSign() const;
	void		SetTarget(std::string target);
	std::string	GetTarget() const;
	void		beSigned(Bureaucrat const &obj);

	virtual	void execute (Bureaucrat const &executor) const = 0;

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
	class FormIsNotSigned : public std::exception
	{
		public:

		virtual const char *what() const throw();
	};
};

std::ostream		&operator<<(std::ostream &out, Form const &obj);

#endif
