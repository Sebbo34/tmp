/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:13:30 by seb               #+#    #+#             */
/*   Updated: 2024/07/09 04:19:57 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string name) : ClapTrap(name)
{
    this->setHitPoint(100);
    this->setAttackDamage(100);
    this->setEnergyPoint(30);
    std::cout << "FragTrap constructor called" << std::endl;

    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const & Scav) 
{
    if (this != &Scav)
    {
        this->setAttackDamage(Scav.getAttackDamage());
        this->setHitPoint(Scav.getHitPoint());
        this->setEnergyPoint(Scav.getEnergyPoint());
        this->setName(Scav.getName());
    }
	return *this;
}

FragTrap::FragTrap (FragTrap const & src) : ClapTrap(src.getName())
{
    std::cout << "Fragtrap copy constructor Called" << std::endl;
	*this = src;
	return ;
}
  

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " get a high-fives" << std::endl;
    return;
}
