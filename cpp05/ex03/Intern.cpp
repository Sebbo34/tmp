/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 08:50:57 by sbo               #+#    #+#             */
/*   Updated: 2024/05/29 11:18:11 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(/* args */)
{
	std::cout << "Intern constructor Called" << std::endl;

}

Intern::~Intern()
{
	std::cout << "Intern destructor Called" << std::endl;
}

Intern::Intern (const Intern & src)

{
	std::cout << "Intern copy constructor Called" << std::endl;
	*this = src;
	return ;
}

Intern & Intern::operator=(Intern const & intern)
{
	return *this;
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	Form *tmp;

	std::cout << "Interns creates " << form << std::endl;
	return (tmp);
}