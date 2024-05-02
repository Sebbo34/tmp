/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:38:55 by seb               #+#    #+#             */
/*   Updated: 2024/05/01 23:11:08 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie zomb;
    Zombie  *newzomb;

    zomb.randomChump("Billy");
    zomb.announce();
    newzomb = newzomb->newZombie("Bob");
    newzomb->announce();
    delete newzomb;
}