/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:31:45 by sbo               #+#    #+#             */
/*   Updated: 2024/07/18 12:37:31 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				sign;
		const int			gradeForSign;
		const int			gradeForEx;
	public:
		AForm(std::string name, int gradeForSign, int gradeForEx);
		virtual ~AForm();
		AForm(const AForm &src);
		AForm &operator=(AForm const &Aform);
		std::string	getName() const;
		int		getGradeForSign(void) const;
		int		getGradeForEx(void) const;
		bool	isSigned(void) const;
		void	GradeTooHighException(void);
		void	GradeTooLowException(void);
		void	IsNotSignedException(void);
		void	beSigned(Bureaucrat bureaucrat);
		virtual void	execute(Bureaucrat const & executor) = 0;
};

std::ostream & operator<<(std::ostream & o, AForm const & Form);

#endif