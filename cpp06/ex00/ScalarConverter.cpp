/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:18:20 by sbo               #+#    #+#             */
/*   Updated: 2024/07/16 10:33:38 by seb              ###   ########.fr       */
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

// ScalarConverter::ScalarConverter(const ScalarConverter &src)
// {
// 	std::cout << "Scalar Converter copy constructor called" << std::endl;
// 	return ;
// }

// ScalarConverter & ScalarConverter::operator=(ScalarConverter const &conv)
// {
// 	return;
// }

int   pui(float n, int exp)
{
	float tmp;

	if (exp == 0)
		return (1); 
	tmp = n;
	while (exp > 1)
	{
		n = n * tmp;
		exp--;
	}
	return (n);
} 
long	ft_atoi(const char *nptr, int *overflow)
{
	int		i;
	long	nbr;

	i = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9' )
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	if (nbr > 2147483647)
		*overflow = 1;
	return (nbr);
}

double	ft_atoi_double(const char *nptr)
{
	int		i;
	double	nbr;
	int		j;

	i = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9' )
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	i++;
	j = 1;
	while (nptr[i] >= '0' && nptr[i] <= '9' )
	{
		nbr = nbr + (double) (nptr[i] - '0') / pui(10, j);
		j++;
		i++;
	}
	return (nbr);
}

float	ft_atoi_float(const char *nptr)
{
	int		i;
	float	nbr;
	int		j;

	i = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9' )
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	i++;
	j = 1;
	while (nptr[i] >= '0' && nptr[i] <= '9' )
	{
		nbr = nbr + (float) (nptr[i] - '0') / pui(10, j);
		j++;
		i++;
	}
	return (nbr);
}

void	ScalarConverter::convert(std::string src)
{
	int type;
	int i;
	int negatif;
	double	value;

	i = 0;
	type = 0;
	value = 0;
	if ((src[0] < '0' || src[0] > '9') && src[0] != '-' && src[0] != '+')
	{
		if ( src.length() == 3 && src[0] == '\'' && src[2] == '\'')
		{
			type = 1;
		}
		else if (src.length() != 1)
			std::cout << "msg erreur" << std::endl;
		else 
			type = 1;
	}
	else
	{
		if (src[0] == '-' || src[0] == '+')
		{
			if (src[0] == '-')
				negatif = 1;
			i++;
		}
		while (src[i] && (src[i] >= '0' && src[i] <= '9'))
			i++;
		if (!src[i])
			type = 2;
		else if (src[i] == '.')
		{
			i++;
			while (src[i] && (src[i] >= '0' && src[i] <= '9'))
				i++;
			if (!src[i])
				type = 4;
			else if (src[i] == 'f' && !src[i + 1])
				type = 3;
			else
				std::cout << "msg erreur" << std::endl;
		}
		else
			std::cout << "msg erreur" << std::endl;
	}

	

}