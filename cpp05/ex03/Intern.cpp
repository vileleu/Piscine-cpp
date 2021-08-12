/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 06:39:56 by vico              #+#    #+#             */
/*   Updated: 2021/07/19 00:43:18 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

using namespace std;

Form	*Intern::ShrubberyCreation(string const &target)
{
	cout << "Intern creates ShrubberyCreationForm\n"; 
	return new ShrubberyCreationForm(target);
}

Form	*Intern::RobotomyRequest(string const &target)
{
	cout << "Intern creates RobotomyRequestForm\n"; 
	return new RobotomyRequestForm(target);
}

Form	*Intern::PresidentialPardon(string const &target)
{
	cout << "Intern creates PresidentialPardonForm\n"; 
	return new PresidentialPardonForm(target);
}

Intern::Intern()
{
}

Intern::Intern(Intern const &copy)
{
}

Intern::~Intern()
{
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	char const	*nam[4] = {"shrubbery creation", "robotomy request", "presidential pardon", NULL};
	Internfct	fct[3] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};
	int		i(0);

	while (i < 3 && name.compare(nam[i]))
		i++;
	while (nam[i])
		return (this->*fct[i])(target);
	throw Intern::FormIsUnknown();
}

const char *Intern::FormIsUnknown::what() const throw()
{
	return "This is not a form's name\n";
}
