/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 06:39:54 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 14:24:58 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private:

	Form*	ShrubberyCreation(std::string const &target);
	Form*	RobotomyRequest(std::string const &target);
	Form*	PresidentialPardon(std::string const &target);

	public:

	Intern();
	Intern(Intern const &copy);
	~Intern();

	Form	*makeForm(std::string const &name, std::string const &target);

	Intern  &operator=(const Intern &cpy);

	class FormIsUnknown : public std::exception
	{
		public:

		virtual const char *what() const throw();
	};
};

typedef Form* (Intern::*Internfct)(std::string const &target);

#endif
