/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:03:14 by sbo               #+#    #+#             */
/*   Updated: 2024/06/28 19:34:38 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include<deque>

template<class T>
int	easyfind(T container, int number)
{
	int occ;
	auto it = container.begin();

	occ = 0;
	while (it != container.end())
	{
		if (*it == number)
			return (occ);
		occ++;
		it++;
	}
	return (-1);
}

#endif