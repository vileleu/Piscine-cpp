/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 03:33:52 by vico              #+#    #+#             */
/*   Updated: 2021/07/16 20:56:43 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:

	public:

	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	~ShrubberyCreationForm();

	virtual	void	execute (Bureaucrat const &executor) const;
	bool const		operator==(ShrubberyCreationForm const &obj);
};

#endif
