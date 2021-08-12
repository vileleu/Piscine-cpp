/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:50:24 by vico              #+#    #+#             */
/*   Updated: 2021/07/19 01:16:21 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

using namespace std;

int		main()
{
	Intern		intern;
    Bureaucrat	chef("JIMMY", 1);
    Form*		form;

	try
	{
    	form = intern.makeForm("robotomy request", "Bender");
		form->beSigned(chef);
		form->execute(chef);
		delete form;
		cout << "\n";
    	form = intern.makeForm("presidential pardon", "Danny");
		form->beSigned(chef);
		form->execute(chef);
		delete form;
		cout << "\n";
    	form = intern.makeForm("shrubbery creation", "Jack");
		form->beSigned(chef);
		form->execute(chef);
		delete form;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what();
	}
	return 0;
}