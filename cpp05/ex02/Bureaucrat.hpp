/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 09:31:15 by sbo               #+#    #+#             */
/*   Updated: 2024/05/28 16:08:27 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "AForm.hpp"

#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	const	std::string	name;
	int					grade;
public:
	Bureaucrat(int inst_grade);
	Bureaucrat(std::string inst_name, int inst_grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(Bureaucrat const &bureaucrat);

	std::string	getName() const;
	int			getGrade() const;

	Bureaucrat	operator++(int);
	Bureaucrat	operator++();
	Bureaucrat	operator--(int);
	Bureaucrat	operator--();
	void		GradeTooHighException(void); //exception a throw
	void		GradeTooLowException(void);
	void		signForm(AForm *form);
	void		executeForm(AForm & form);
	
};

class Error : public std::exception
{
	private :
		std::string err;
	public :
		Error(std::string const& phrase="") throw()
		 :err(phrase)
	{}
	 virtual const char* what() const throw()
	 {
		 return err.c_str();
	 }
	 virtual ~Error() throw()
	{}
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif