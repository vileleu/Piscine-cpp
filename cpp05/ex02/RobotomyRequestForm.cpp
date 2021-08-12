/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 04:33:47 by vico              #+#    #+#             */
/*   Updated: 2021/07/16 21:11:59 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

using namespace std;

RobotomyRequestForm::RobotomyRequestForm(string target) : Form("ShrubberyCreationForm", 72, 45)
{
	this->SetTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy.GetName(), 72, 45)
{
	this->SetTarget(copy.GetTarget());
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->GetSign())
		throw Form::FormIsNotSigned();
	if (executor.GetGrade() > this->GetG_exec())
		throw Form::GradeTooLowException();
	srand(time(NULL));

	int n(rand() % 2);
	if (n == 1)
		cout << "* bzzzzzz bzzzzzz *\n" << this->GetTarget() << " has been succesfully robotized\n";
	else
		cout << "Bad luck, robotization didn't work\n";
}

bool const	RobotomyRequestForm::operator==(RobotomyRequestForm const &obj)
{
	if (this->GetName() == obj.GetName() && this->GetSign() == obj.GetSign())
		return true;
	return false;
}
