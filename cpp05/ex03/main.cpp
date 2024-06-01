/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:28:02 by sbo               #+#    #+#             */
/*   Updated: 2024/05/29 11:40:42 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShruberryCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

//explicit error for execute Form
//arbre dans un file

int main(void)
{
	try
	{
		Bureaucrat B("James", -5);
		ShruberryCreationForm A("De");
		A.beSigned(B);
		B.executeForm(A);
	}
	catch(std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
}