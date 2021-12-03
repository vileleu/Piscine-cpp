/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:16:00 by vico              #+#    #+#             */
/*   Updated: 2021/12/01 14:08:58 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unnamed"), grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const &c_name, int c_grade) : name(c_name)
{
	if (c_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (c_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = c_grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : name(copy.name), grade(copy.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

std::string const	Bureaucrat::GetName() const
{
	return this->name;
}

int			Bureaucrat::GetGrade() const
{
	return this->grade;
}

void		Bureaucrat::incremente()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		(this->grade)--;
}

void		Bureaucrat::decremente()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		(this->grade)++;
}

void		Bureaucrat::signForm(Form &obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout << "bureaucrat " << this->name << " signs form " << obj.GetName() << "\n";
	}
	catch (std::exception & e)
	{
		std::cout << "bureaucrat " << this->name << " cannot sign because grade is too low\n";
	}
}

Bureaucrat   &Bureaucrat::operator=(const Bureaucrat &cpy)
{
    this->grade = cpy.GetGrade();
    return *this;
}

std::ostream		&operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << obj.GetName() << ", bureaucrat grade " << obj.GetGrade() << ".\n";
    return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too High\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too Low\n";
}
