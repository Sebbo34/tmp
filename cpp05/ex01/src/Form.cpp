/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:31:39 by sbo               #+#    #+#             */
/*   Updated: 2024/07/19 14:43:53 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, const int gradeForSign, const int gradeForEx) : name(name), sign(0), gradeForSign(gradeForSign), gradeForEx(gradeForEx)
{
	if (gradeForSign > 150 || gradeForEx > 150)
		throw Form::GradeTooLowException();
	else if (gradeForSign < 1 || gradeForEx < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form constructor called" << std::endl;
	return ;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}


Form::Form (const Form & src) :name(src.getName()), gradeForSign(src.getGradeForSign()), gradeForEx(src.getGradeForEx())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
	return ;
}

std::string Form::getName(void) const
{
	return (this->name);
}

int Form::getGradeForSign(void) const
{
	return (this->gradeForSign);
}

int Form::getGradeForEx(void) const
{
	return (this->gradeForEx);
}

bool Form::isSigned(void) const
{
	return (this->sign);
}

Form & Form::operator=(Form const & Form)
{
	if (this != &Form)
	{
		this->sign = Form.isSigned();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const & Form)
{
	o << "Form " << Form.getName() << " need a " << Form.getGradeForEx() << " for exec and " << Form.getGradeForSign() << " for sign";
	if (Form.isSigned())
		o << " and is already signed";
	else
		o << " and need to be signed";
	return o;
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeForSign())
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}
typedef Form::GradeTooLowException Low;
typedef Form::GradeTooHighException High;

const char* High::what() const throw()
{
	return "Grade too high";
}

const char* Low::what() const throw()
{
	return "Grade too low";
}
