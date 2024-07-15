/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:29:38 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 10:40:28 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_HPP
#define ERROR_HPP

#include <iostream>

class Error : public std::exception
{
	private :
		std::string err;
	public :
		Error(std::string const& phrase) throw();
		virtual const char* what() const throw();
		virtual ~Error() throw();
};

#endif