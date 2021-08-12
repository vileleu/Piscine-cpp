/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:50:24 by vico              #+#    #+#             */
/*   Updated: 2021/07/19 01:15:23 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

using namespace std;

int		main()
{
    ShrubberyCreationForm form = ShrubberyCreationForm("Arbre");
    RobotomyRequestForm form2 = RobotomyRequestForm("Robotomise moi ca");
    PresidentialPardonForm form3 = PresidentialPardonForm("The pardon");
    Bureaucrat homme = Bureaucrat("Pompidou", 120);
    Bureaucrat homme2 = Bureaucrat("Pompon", 80);
    Bureaucrat homme3 = Bureaucrat("Chef", 1);
    try
    {
        form.execute(homme);
    }
    catch (const std::exception & e)
    {
        cout << e.what();
    }
    try
    {
        form2.execute(homme2);
    }
    catch (const std::exception & e)
    {
        cout << e.what();
    }
    try
    {
        form3.beSigned(homme3);
        homme3.executeForm(form3);
    }
    catch (const std::exception & e)
    {
        cout << e.what();
    }
    form.beSigned(homme3);
    form2.beSigned(homme3);
    form3.beSigned(homme3);

    homme3.executeForm(form);
    homme3.executeForm(form2);
    homme3.executeForm(form3);
	return 0;
}