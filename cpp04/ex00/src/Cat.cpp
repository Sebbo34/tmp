/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:59:52 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 08:09:09 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}
std::string	Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << "miaouw" << std::endl;
}

Cat & Cat::operator=(Cat const & cat)
{
	if (this != &cat)
	{
		this->type = cat.type;
	}
	return *this;
}

Cat::Cat (Cat const & src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}
