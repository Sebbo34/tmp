/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 09:31:11 by sbo               #+#    #+#             */
/*   Updated: 2024/05/28 16:09:33 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int inst_grade) : grade(inst_grade), name("Bob")
{
	if (inst_grade > 150)
		this->GradeTooLowException();
	else if (inst_grade < 0)
		this->GradeTooHighException();
	std::cout << "Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string inst_name, int inst_grade) : grade(inst_grade), name(inst_name)
{
	if (inst_grade > 150)
		this->GradeTooLowException();
	else if (inst_grade < 0)
		this->GradeTooHighException();
	std::cout << "Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}


Bureaucrat::Bureaucrat (Bureaucrat const & src) : name(src.getName())
{
	std::cout << "Copy constructor Called" << std::endl;
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

Bureaucrat 	Bureaucrat::operator++(int)
{
	if (this->grade < 1)
		this->GradeTooHighException();
	--this->grade;
	return (*this);
}

Bureaucrat 	Bureaucrat::operator++()
{
	if (this->grade < 1)
		this->GradeTooHighException();
	this->grade--;
	return (*this);
}

Bureaucrat 	Bureaucrat::operator--(int)
{
	if (this->grade > 149)
		this->GradeTooLowException();
	++this->grade;
	return (*this);
}

Bureaucrat 	Bureaucrat::operator--()
{
	if (this->grade > 149)
		this->GradeTooLowException();
	this->grade++;
	return (*this);
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

void	Bureaucrat::signForm(AForm *form)
{
	if (form->getGradeForSign() >= this->getGrade())
	{
		if (!form->isSigned())
		{
			form->beSigned(*this);
			std::cout << this->getName() << " signed " << form->getName() << std::endl;
		}
		else
			std::cout << this->getName() << "  couldn’t sign " << form->getName() << " because it is already signed" << std::endl;
	}
	else
		std::cout << this->getName() << "  couldn’t sign " << form->getName() << " because his grade is too low" << std::endl;

}
void	Bureaucrat::executeForm(AForm & form)
{
	form.execute(*this);
	std::cout << this->name << " EXECUTES " << form.getName() << std::endl;
}
