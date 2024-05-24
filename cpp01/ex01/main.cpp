/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:38:55 by seb               #+#    #+#             */
/*   Updated: 2024/05/01 23:11:11 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int     i = 0;
    Zombie  *horde;

    horde = horde->zombieHorde(9, "Jim");
    while (i < 9)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
}