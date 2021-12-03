/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:15:57 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 14:22:01 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>

class Form;

class Bureaucrat
{
	private:

	std::string const	name;
	int			grade;

	public:

	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();

	std::string	GetName() const;
	int			GetGrade() const;
	void		incremente();
	void		decremente();

	void		signForm(Form &obj);
	void		executeForm(Form const &form);

	Bureaucrat  &operator=(const Bureaucrat &cpy);

	class GradeTooHighException : public std::exception
	{
		public:
		
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		
		virtual const char* what() const throw();
	};
};

std::ostream		&operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
