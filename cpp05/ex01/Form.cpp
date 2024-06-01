/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:31:39 by sbo               #+#    #+#             */
/*   Updated: 2024/05/27 14:39:06 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, const int gradeForSign, const int gradeForEx) : name(name), sign(0), gradeForSign(gradeForSign), gradeForEx(gradeForEx)
{
	if (gradeForSign > 150 || gradeForEx > 150)
		this->GradeTooLowException();
	else if (gradeForSign < 0 || gradeForEx < 0)
		this->GradeTooHighException();
	std::cout << "Form constructor called" << std::endl;
	return ;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}


Form::Form (const Form & src) : gradeForSign(src.getGradeForSign()), gradeForEx(src.getGradeForEx()), name(src.getName())
{
	std::cout << "Copy constructor Called" << std::endl;
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
	o << Form.getName() << " " << Form.getGradeForEx() << " " << Form.getGradeForSign() << " ";
	return o;
}

void	Form::GradeTooHighException(void)
{
	throw Error("Grade Too High");
}

void	Form::GradeTooLowException(void)
{
	throw Error("Grade Too Low");
}

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeForSign())
		this->sign = true;
	else
		GradeTooLowException();
}

