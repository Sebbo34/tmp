/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 22:50:15 by seb               #+#    #+#             */
/*   Updated: 2024/05/01 22:58:25 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    Zombie::zombieHorde( int N, std::string name )
{
    Zombie  *zombHorde = new Zombie[N];
    int     i;

    i = 0;

    while (i < N)
    {
        zombHorde[i].name = name;
        i++; 
    }
    return (zombHorde);
}
