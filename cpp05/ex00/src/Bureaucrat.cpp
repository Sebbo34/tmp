/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 09:31:11 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 12:30:55 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string inst_name, int inst_grade) : name(inst_name),  grade(inst_grade)
{
	if (inst_grade > 150)
		this->GradeTooLowException();
	else if (inst_grade < 1)
		this->GradeTooHighException();
	std::cout << "Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}


Bureaucrat::Bureaucrat (Bureaucrat const & src) : name(src.getName()), grade(src.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
	return ;
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & Bureaucrat)
{
	if (this != &Bureaucrat)
	{
		this->grade = Bureaucrat.getGrade();
	}
	return *this;
}

void 	Bureaucrat::promote()
{
	if (this->grade <= 1)
		this->GradeTooHighException();
	--this->grade;
}

void 	Bureaucrat::demote()
{
	if (this->grade > 149)
		this->GradeTooLowException();
	++this->grade;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const & bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}

void	Bureaucrat::GradeTooHighException(void)
{
	throw Error("Grade Too High");
}

void	Bureaucrat::GradeTooLowException(void)
{
	throw Error("Grade Too Low");
}