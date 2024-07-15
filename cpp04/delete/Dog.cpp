/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:00:00 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 09:54:53 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
	this->Brain = new class Brain;
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	delete this->Brain;
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
void	Dog::setIdea(std::string ideas, int i)
{
	this->Brain->setIdea(ideas, i);
	return ;
}

void	Dog::printIdeas()
{
	this->Brain->printIdeas();
}

Dog::Dog (Dog const & src)
{
	std::cout << "Copy constructor Called" << std::endl;
	*this = src;
	return ;
}

Dog & Dog::operator=(Dog const & Dog)
{
	this->Brain = new class Brain;

	if (this != &Dog)
	{
		this->type = Dog.getType();
		*this->Brain = *Dog.Brain;
	}
	return *this;
}
/* 
void Dog::test() const
{
	
} */