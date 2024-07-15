/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 09:31:15 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 21:21:54 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "AForm.hpp"
#include "error.hpp"
#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	const	std::string	name;
	int					grade;
public:
	Bureaucrat(std::string inst_name, int inst_grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(Bureaucrat const &bureaucrat);

	std::string	getName() const;
	int			getGrade() const;

	void		promote();
	void		demote();
	void		GradeTooHighException(void);
	void		GradeTooLowException(void);
	void		signForm(AForm &form);
	void		executeForm(AForm &form);
	
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif