/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:15:57 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 13:53:24 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:

	std::string const	name;
	int					grade;

	public:

	Bureaucrat();
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();

	std::string const	GetName() const;
	int			GetGrade() const;
	void		incremente();
	void		decremente();

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
