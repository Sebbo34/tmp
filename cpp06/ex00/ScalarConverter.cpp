/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:18:20 by sbo               #+#    #+#             */
/*   Updated: 2024/05/31 12:52:17 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter(/* args */)
{
	std::cout << "Scalar Converter constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Scalar Converter destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	std::cout << "Scalar Converter copy constructor called" << std::endl;
	return ;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const &conv)
{
	return;
}

void	ScalarConverter::convert(std::string src)
{
	/*
		check si c'est un scalaire one char
		char	if (is printable -> print) else non printable ou impossible
		int		if int max ou min non printable if check . ->arrondi inf 
		float	print float max non printable
		double	double max
	*/
	if (src[0] < '0' || src[0] > '9')
		std::cout << "char : " << src[0] << std::endl;
}