/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:50:24 by vico              #+#    #+#             */
/*   Updated: 2021/11/30 14:10:11 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int		main()
{
	try
	{
		Intern		intern;
		Bureaucrat	henry("Henry", 138);
    	Bureaucrat	chef("Chef", 1);
    	Form*		form;

    	form = intern.makeForm("robotomy request", "Bender");
		chef.signForm(*form);
		chef.executeForm(*form);
		delete form;
		std::cout << "\n";
    	form = intern.makeForm("presidential pardon", "Danny");
		chef.signForm(*form);
		chef.executeForm(*form);
		delete form;
		std::cout << "\n";
    	form = intern.makeForm("shrubbery creation", "Jack");
		chef.signForm(*form);
		henry.executeForm(*form);
		delete form;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what();
	}
	return 0;
}