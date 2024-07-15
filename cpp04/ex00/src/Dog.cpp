/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:00:00 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 08:06:45 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}
std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound() const
{
	std::cout << "OUAF" << std::endl;
}

Dog & Dog::operator=(Dog const & dog)
{
	if (this != &dog)
	{
		this->type = dog.type;
	}
	return *this;
}

Dog::Dog (Dog const & src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}