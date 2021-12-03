/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:50:24 by vico              #+#    #+#             */
/*   Updated: 2021/11/30 13:57:09 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main()
{
    Form *form = new ShrubberyCreationForm("House");
    Bureaucrat pompidou("Pompidou", 138);
    Bureaucrat chef("Chef", 1);
	std::cout << "\n---Shrubbery---\n\n";
    try
    {
        pompidou.executeForm(*form);
    }
    catch (const std::exception & e)
    {
        std::cerr << e.what();
    }
    try
    {
        form->execute(pompidou);
    }
    catch (const std::exception & e)
    {
        std::cerr << e.what();
    }
    try
    {
        chef.signForm(*form);
        pompidou.executeForm(*form);
    }
    catch (const std::exception & e)
    {
        std::cerr << e.what();
    }
	delete form;
	std::cout << "\n---Robotomy---\n\n";
    form = new RobotomyRequestForm("Robot_target");
	try
	{
    	chef.signForm(*form);
    	pompidou.executeForm(*form);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete form;
	std::cout << "\n---Presidential---\n\n";
	form = new PresidentialPardonForm("president_target");
	try
	{
    	pompidou.signForm(*form);
		chef.signForm(*form);
    	chef.executeForm(*form);	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete form;
	return 0;
}