/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:31:45 by sbo               #+#    #+#             */
/*   Updated: 2024/07/17 21:32:31 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				sign;
		const int			gradeForSign;
		const int			gradeForEx;
	public:
		Form(std::string name, int gradeForSign, int gradeForEx);
		~Form();
		Form(const Form &src);
		Form &operator=(Form const &form);
		
		std::string	getName() const;
		int getGradeForSign(void) const;
		int getGradeForEx(void) const;
		bool	isSigned(void) const;

		void	GradeTooHighException(void);
		void	GradeTooLowException(void);
		void	beSigned(Bureaucrat const &bureaucrat);
};

std::ostream & operator<<(std::ostream & o, Form const & Form);

#endif