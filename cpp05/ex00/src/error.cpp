/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:30:10 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 10:35:03 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.hpp"

Error::Error(std::string const& phrase) throw() :err(phrase)
{}
const char* Error::what() const throw()
{
	return err.c_str();
}
Error::~Error() throw()
{}