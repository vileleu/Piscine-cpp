/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:15:57 by vico              #+#    #+#             */
/*   Updated: 2021/07/15 20:36:19 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
