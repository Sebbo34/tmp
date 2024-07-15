/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:31:39 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 23:13:41 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, const int gradeForSign, const int gradeForEx) : name(name), sign(0), gradeForSign(gradeForSign), gradeForEx(gradeForEx)
{
	if (gradeForSign > 150 || gradeForEx > 150)
		this->GradeTooLowException();
	else if (gradeForSign < 1 || gradeForEx < 1)
		this->GradeTooHighException();
	std::cout << "AForm constructor called" << std::endl;
	return ;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
	return ;
}


AForm::AForm (const AForm & src) : name(src.getName()), gradeForSign(src.getGradeForSign()), gradeForEx(src.getGradeForEx())
{
	std::cout << "Copy constructor Called" << std::endl;
	*this = src;
	return ;
}

std::string AForm::getName(void) const
{
	return (this->name);
}

int AForm::getGradeForSign(void) const
{
	return (this->gradeForSign);
}

int AForm::getGradeForEx(void) const
{
	return (this->gradeForEx);
}

bool AForm::isSigned(void) const
{
	return (this->sign);
}

AForm & AForm::operator=(AForm const & AForm)
{
	if (this != &AForm)
	{
		this->sign = AForm.isSigned();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, AForm const & AForm)
{
	o << "Form " << AForm.getName() << " need a " << AForm.getGradeForEx() << " for exec and " << AForm.getGradeForSign() << " for sign";
	if (AForm.isSigned())
		o << " and is already signed";
	else
		o << " and need to be signed";
	return o;
}

void	AForm::GradeTooHighException(void)
{
	throw Error("Grade Too High");
}

void	AForm::GradeTooLowException(void)
{
	throw Error("Grade Too Low");
}

void	AForm::IsNotSignedException(void)
{
	throw Error("The Form is not signed");
}


void	AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeForSign())
		this->sign = true;
	else
		GradeTooLowException();
}

void	AForm::execute(Bureaucrat const & executor)
{
	std::cout << executor.getName() << " executed " << this->name <<std::endl;
}
