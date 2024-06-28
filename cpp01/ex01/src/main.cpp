/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:38:55 by seb               #+#    #+#             */
/*   Updated: 2024/06/01 17:38:55 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int     i = 0;
	Zombie  *horde =  NULL;

	horde = zombieHorde(7, "Jim");
	while (i < 7)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
}