/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 04:36:19 by vico              #+#    #+#             */
/*   Updated: 2021/07/16 21:11:51 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

using namespace std;

PresidentialPardonForm::PresidentialPardonForm(string target) : Form("ShrubberyCreationForm", 25, 5)
{
	this->SetTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy.GetName(), 25, 5)
{
	this->SetTarget(copy.GetTarget());
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->GetSign())
		throw Form::FormIsNotSigned();
	if (executor.GetGrade() > this->GetG_exec())
		throw Form::GradeTooLowException();
	cout << this->GetTarget() << " was forgiven by Zafod Beeblebrox.\n";
}

bool const	PresidentialPardonForm::operator==(PresidentialPardonForm const &obj)
{
	if (this->GetName() == obj.GetName() && this->GetSign() == obj.GetSign())
		return true;
	return false;
}
