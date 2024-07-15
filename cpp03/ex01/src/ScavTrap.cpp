/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:13:30 by seb               #+#    #+#             */
/*   Updated: 2024/07/09 04:20:14 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
    this->setHitPoint(100);
    this->setAttackDamage(20);
    this->setEnergyPoint(50);
    std::cout << "ScavTrap constructor called" << std::endl;

    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & Scav) 
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

ScavTrap::ScavTrap (ScavTrap const & src) : ClapTrap(src.getName())
{
    std::cout << "Scavtrap copy constructor Called" << std::endl;
	*this = src;
	return ;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->getHitPoint() == 0)
    {
        std::cout << this->getName() << " is dead " << std::endl;
        return ;
    }
    if (this->getEnergyPoint() > 0)
    {   
        std::cout << "Scap Trap " <<this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoint(getEnergyPoint() - 1);
    }
    else
        std::cout << this->getName() << " doesn't have enought energy to attack " << std::endl;
    return ;
}  

void    ScavTrap::guardGate(void)
{
    std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
    return;
}
