/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:21:35 by seb               #+#    #+#             */
/*   Updated: 2024/05/09 22:14:13 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clap");
    ClapTrap trap("Clap");

    clap.attack("target");
    clap.takeDamage(3);
    std::cout <<clap.getHitPoint() << std::endl;
    clap.beRepaired(54);
    std::cout <<clap.getHitPoint() << std::endl;
}