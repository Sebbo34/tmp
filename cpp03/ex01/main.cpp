/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:21:35 by seb               #+#    #+#             */
/*   Updated: 2024/05/15 19:50:12 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap clap("Scav");
    ScavTrap test = clap;

    clap.attack("target");
    clap.takeDamage(3);
    std::cout << clap.getHitPoint() << std::endl;
    clap.beRepaired(54);
    std::cout <<clap.getHitPoint() << std::endl;
 //<   clap.guardGate();
    std::cout << test.getName() << " " << test.getHitPoint() << std::endl;

}