/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:28:02 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 14:56:04 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Form F("test", 1, 1);
		Form B("B", 1, 5);
		Bureaucrat f("Victor", 1);
		Bureaucrat t(f);
		f.signForm(&F);
		f.signForm(&F);
		F.beSigned(t);
		std::cout << F << std::endl;
		std::cout << B << std::endl;
		std::cout << B.isSigned() << std::endl;
		B.beSigned(t);
		B.beSigned(t);
		std::cout << B << std::endl;
		std::cout << B.isSigned() << std::endl;
	}
	catch(std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
}