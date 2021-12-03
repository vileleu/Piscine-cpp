/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 04:33:47 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 14:27:17 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
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
		std::cout << "* bzzzzzz bzzzzzz *\n" << this->GetTarget() << " has been succesfully robotized\n";
	else
		std::cout << "Bad luck, robotization didn't work\n";
}
