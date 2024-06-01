/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:18:50 by sbo               #+#    #+#             */
/*   Updated: 2024/05/28 11:36:41 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"


Animal::Animal() : type("Animal")
{
	std::cout << "Constructor Called" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Called" << std::endl;
	return ;
}

Animal::Animal (Animal const & src)
{
	std::cout << "Copy constructor Called" << std::endl;
	*this = src;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
void	Animal::makeSound()
{
	std::cout << "rrroow" << std::endl;
}


Animal & Animal::operator=(Animal const & animal)
{
	if (this != &animal)
	{
		this->type = animal.getType();
	}
	return *this;
}

