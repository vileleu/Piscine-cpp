/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:43:18 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 14:23:58 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string c_name, int c_g_sign, int c_g_exec) : name(c_name), g_sign(c_g_sign), g_exec(c_g_exec), sign(false)
{
	if (c_g_sign > 150 || c_g_exec > 150)
		throw Form::GradeTooLowException();
	if (c_g_sign < 1 || c_g_exec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const &copy) : name(copy.name), g_sign(copy.g_sign), g_exec(copy.g_exec), sign(copy.sign)
{
}

Form::~Form()
{
}

std::string	Form::GetName() const
{
	return this->name;
}

int 		Form::GetG_sign() const
{
	return this->g_sign;
}

int			Form::GetG_exec() const
{
	return this->g_exec;
}

bool		Form::GetSign() const
{
	return this->sign;
}

std::string	Form::GetTarget() const
{
	return this->target;
}

void		Form::SetTarget(std::string target)
{
	this->target = target;
}

void		Form::beSigned(Bureaucrat const &obj)
{
	if (obj.GetGrade() > this->g_sign)
		throw Form::GradeTooLowException();
	else
		this->sign = true;
}

Form    &Form::operator=(const Form &cpy)
{
	(void)cpy;
    return *this;
}

std::ostream		&operator<<(std::ostream &out, Form const &obj)
{
	out << "Form " << obj.GetName() << " : g_sign = " << obj.GetG_sign() << ", g_exec = " << obj.GetG_exec() << ", sign = " << obj.GetSign() << "\n";
	return out;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High\n";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low\n";
}

const char *Form::FormIsNotSigned::what() const throw()
{
	return "Form is not signed\n";
}
