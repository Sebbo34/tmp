/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:46:18 by seb               #+#    #+#             */
/*   Updated: 2024/05/09 18:59:15 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	/* Fixed a;
	Fixed b( 10 ); Fixed const c( 42.42f ); Fixed const d( b );
	a = Fixed( 1234.4321f ); //probleme avec les const
	
	if (b < a)
		std::cout << "<" << std::endl;
	if (b <= a)
		std::cout << "<=" << std::endl;
	if (a >= b)
		std::cout << ">=" << std::endl;
	if (a > b)
		std::cout << ">" << std::endl;
	if (b == 10)
		std::cout << "==" << std::endl;
	if (a != b)
		std::cout << "!=" << std::endl;
	
	Fixed const f( Fixed( 5.05f ) * Fixed( 2 ) );
	a = a*b;
	std::cout << a << std::endl;
	std::cout << a + b << std::endl;
	std::cout << f << std::endl;
	std::cout << a / b << std::endl; */
	
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << ++a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << --a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "div par 0 " << b / a  << std::endl;
	std::cout <<  a << std::endl;
	std::cout << Fixed::max( a + 43, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	return 0; 
}