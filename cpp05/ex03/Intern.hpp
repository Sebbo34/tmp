/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 08:44:22 by sbo               #+#    #+#             */
/*   Updated: 2024/05/29 09:30:32 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public:
		Intern(/* args */);
		~Intern();
		Intern(const Intern &src);
		Intern &operator=(Intern const &intern);
		Form	*makeForm(std::string form, std::string target);
};

#endif