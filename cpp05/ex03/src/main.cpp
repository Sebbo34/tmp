/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:28:02 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 23:19:53 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShruberryCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	try
	{
		Intern someRandomIntern;
		Form *rrf;
		Bureaucrat james("James", 1);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		james.signForm(*rrf);
		james.executeForm(*rrf);
	}
	catch(std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
}