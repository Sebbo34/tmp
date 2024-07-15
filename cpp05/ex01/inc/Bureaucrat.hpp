/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 09:31:15 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 12:34:29 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Form.hpp"

#include <iostream>
#include <exception>
#include "error.hpp"

class Form;

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
	void		GradeTooHighException(void); //exception a throw
	void		GradeTooLowException(void);
	void		signForm(Form *form);
	
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif