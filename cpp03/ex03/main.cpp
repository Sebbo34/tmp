/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:21:35 by seb               #+#    #+#             */
/*   Updated: 2024/05/15 23:00:13 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap clap("Frag");
    FragTrap test = clap;

    clap.attack("target");
    clap.takeDamage(3);
    std::cout << clap.getHitPoint() << std::endl;
    clap.beRepaired(54);
    std::cout <<clap.getHitPoint() << std::endl;
 //<   clap.guardGate();
    std::cout << test.getName() << " " << test.getHitPoint() << std::endl;
    test.highFivesGuys();
}