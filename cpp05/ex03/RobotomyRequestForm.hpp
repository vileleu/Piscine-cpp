/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 04:33:51 by vico              #+#    #+#             */
/*   Updated: 2021/07/19 00:31:03 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:

	public:

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	virtual	~RobotomyRequestForm();

	virtual	void execute (Bureaucrat const &executor) const;
	bool const	operator==(RobotomyRequestForm const &obj);
};

#endif
