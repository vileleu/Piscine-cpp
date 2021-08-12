/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 03:33:54 by vico              #+#    #+#             */
/*   Updated: 2021/07/16 21:12:08 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

using namespace std;

ShrubberyCreationForm::ShrubberyCreationForm(string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->SetTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy.GetName(), 145, 137)
{
	this->SetTarget(copy.GetTarget());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->GetSign())
		throw Form::FormIsNotSigned();
	if (executor.GetGrade() > this->GetG_exec())
		throw Form::GradeTooLowException();

	string		file_name(this->GetTarget() + "_shrubbery");
	ofstream	write(file_name);
	write << "    ccee88oo\n  C8O8O8Q8PoOb o8oo\n dOB69QO8PdUOpugoO9bD\nCgggbU8OU qOp qOdoUOdcb\n    6OuU  /p u gcoUodpP\n      \\\\//  /douUP\n        \\\\////\n         |||/\\\n         |||\\/\n         |||||\n   .....//||||\\....\n";
}

bool const	ShrubberyCreationForm::operator==(ShrubberyCreationForm const &obj)
{
	if (this->GetName() == obj.GetName() && this->GetSign() == obj.GetSign())
		return true;
	return false;
}
