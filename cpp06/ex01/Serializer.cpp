/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:50:56 by seb               #+#    #+#             */
/*   Updated: 2024/07/16 13:33:07 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t r = reinterpret_cast<uintptr_t>(ptr);
	return r;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *restoredPtr = reinterpret_cast<Data *>(raw);
	return (restoredPtr);
}
