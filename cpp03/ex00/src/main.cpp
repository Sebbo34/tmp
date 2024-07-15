/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:21:35 by seb               #+#    #+#             */
/*   Updated: 2024/07/09 03:29:48 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	int i = 0;

	ClapTrap clap("Clap");
	ClapTrap trap("Trap");
	while (i++ < 11)
		clap.attack("target");
	clap.beRepaired(15);
	trap.takeDamage(9);
	std::cout <<trap.getHitPoint() << std::endl;
	trap.beRepaired(15);
	trap.attack("target");
	std::cout <<trap.getHitPoint() << std::endl;
	trap.takeDamage(25);
	std::cout <<trap.getHitPoint() << std::endl;
	trap.beRepaired(15);
	trap.attack("target");
}