/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:18:15 by sbo               #+#    #+#             */
/*   Updated: 2024/06/25 15:20:55 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCOVERTER_HPP
#define SCALARCOVERTER_HPP

#include <iostream>

class ScalarConverter
{
	private:
		/* data */
	public:
		ScalarConverter(/* args */);
		virtual ~ScalarConverter() = 0;
		// ScalarConverter(const ScalarConverter &src);
		// ScalarConverter &operator=(ScalarConverter const &conv);
		static void			convert(std::string src);
};

#endif