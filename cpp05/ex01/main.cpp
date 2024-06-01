/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:28:02 by sbo               #+#    #+#             */
/*   Updated: 2024/05/27 15:02:07 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Form F("test", 0, 0);
		Form B("B", 0, 15);
		Bureaucrat f("Victor", 0);
		Bureaucrat t(f);
		f.signForm(&F);
		f.signForm(&F);
	}
	catch(std::exception const& e)
	{
		std::cerr << e.what() << std::endl;
	}
}