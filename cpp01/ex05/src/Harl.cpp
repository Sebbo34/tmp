/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:02:26 by seb               #+#    #+#             */
/*   Updated: 2024/06/01 19:10:20 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Constructor Called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Destructor Called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "debug" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "info" << std::endl;
	return ;
}
void	Harl::warning(void)
{
	std::cout << "warning" << std::endl;
}
void	Harl::error(void)
{
	std::cout << "error" << std::endl;
}

void	Harl::complain(std::string level)
{
	int i;
	void	(Harl::*ptr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvl[4] = {"DEBUG", "INFO" , "WARNING", "ERROR"};

	i = 0;
	while ( i < 4)
	{
		if (level.compare(lvl[i]) == 0)
		{
			(this->*ptr[i])();
			return ;	
		}
		i++;
	}
	std::cout << "This level doesn't exist" << std::endl;
	return ;
}