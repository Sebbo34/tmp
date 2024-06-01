/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:33:04 by sbo               #+#    #+#             */
/*   Updated: 2024/05/28 13:30:37 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
		std::string target;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

		std::string getTarget(void) const;
		RobotomyRequestForm & operator=(RobotomyRequestForm const & form);
		RobotomyRequestForm (const RobotomyRequestForm & src);
		void	execute(Bureaucrat const & executor);

};



#endif