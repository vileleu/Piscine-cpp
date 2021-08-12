/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 02:40:34 by vico              #+#    #+#             */
/*   Updated: 2021/06/27 05:49:00 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#define DEBUG "0"
#define INFO "1"
#define WARNING "2"
#define ERROR "3"

#include <iostream>
#include <string>

class Karen
{
	private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:
	
	Karen();
	~Karen();
	void	complain(std::string level);
};

typedef void (Karen::*KarenMemFn)(void);

#endif
