/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:50:56 by seb               #+#    #+#             */
/*   Updated: 2024/06/27 12:40:19 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(/* args */)
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
