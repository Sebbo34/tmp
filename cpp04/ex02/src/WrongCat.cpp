/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:00:04 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 09:33:37 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}
std::string	WrongCat::getType(void) const
{
	return (this->type);
}

WrongCat & WrongCat::operator=(WrongCat const & wrongCat)
{
	if (this != &wrongCat)
	{
		this->type = wrongCat.getType();
	}
	return *this;
}

WrongCat::WrongCat (WrongCat const & src)
{
	std::cout << "Wrong Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "miauwww" << std::endl;
}
