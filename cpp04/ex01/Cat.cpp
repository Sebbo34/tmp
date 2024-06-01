/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:59:52 by sbo               #+#    #+#             */
/*   Updated: 2024/05/25 17:06:40 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
	this->Brain = new class Brain;
	std::cout << "Cat constructor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	delete this->Brain;
	std::cout << "Cat destructor called" << std::endl;
	return ;
}
std::string	Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound()
{
	std::cout << "miaouw" << std::endl;
}
void	Cat::setIdea(std::string ideas, int i)
{
	this->Brain->setIdea(ideas, i);
	return ;
}

void	Cat::printIdeas()
{
	this->Brain->printIdeas();
}

Cat::Cat (Cat const & src)
{
	std::cout << "Copy constructor Called" << std::endl;
	*this = src;
	return ;
}

Cat & Cat::operator=(Cat const & Cat)
{
	this->Brain = new class Brain;
	if (this != &Cat)
	{
		this->type = Cat.getType();
		*this->Brain = *Cat.Brain;
	}
	return *this;
}