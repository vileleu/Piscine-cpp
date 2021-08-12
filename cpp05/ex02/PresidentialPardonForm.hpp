/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 04:34:07 by vico              #+#    #+#             */
/*   Updated: 2021/07/16 20:57:11 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:

	public:

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	~PresidentialPardonForm();

	virtual	void execute(Bureaucrat const &executor) const;
	bool const	operator==(PresidentialPardonForm const &obj);
};

#endif
