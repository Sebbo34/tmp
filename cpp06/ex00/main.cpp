/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:17:13 by sbo               #+#    #+#             */
/*   Updated: 2024/07/16 10:32:07 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//classe canonique??

int main() 
{
    ScalarConverter::convert("42");
    ScalarConverter::convert("42.32");
    ScalarConverter::convert("42.324f");
    ScalarConverter::convert("42.3");
    ScalarConverter::convert("f42");
    ScalarConverter::convert("'c'");
    ScalarConverter::convert("c");   
}
