/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 06:39:56 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 14:25:21 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form	*Intern::ShrubberyCreation(std::string const &target)
{
	std::cout << "Intern creates ShrubberyCreationForm\n"; 
	return new ShrubberyCreationForm(target);
}

Form	*Intern::RobotomyRequest(std::string const &target)
{
	std::cout << "Intern creates RobotomyRequestForm\n"; 
	return new RobotomyRequestForm(target);
}

Form	*Intern::PresidentialPardon(std::string const &target)
{
	std::cout << "Intern creates PresidentialPardonForm\n"; 
	return new PresidentialPardonForm(target);
}

Intern::Intern()
{
}

Intern::Intern(Intern const &copy)
{
	(void)copy;
}

Intern::~Intern()
{
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	char const	*nam[4] = {"shrubbery creation", "robotomy request", "presidential pardon", NULL};
	Internfct	fct[3] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};
	int			i(0);

	while (i < 3 && name.compare(nam[i]))
		i++;
	while (nam[i])
		return (this->*fct[i])(target);
	throw Intern::FormIsUnknown();
}

Intern    &Intern::operator=(const Intern &cpy)
{
    (void)cpy;
    return *this;
}

const char *Intern::FormIsUnknown::what() const throw()
{
	return "This is not a form's name\n";
}
