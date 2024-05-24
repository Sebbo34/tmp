/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:13:30 by seb               #+#    #+#             */
/*   Updated: 2024/05/15 23:04:03 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string name) : ClapTrap(name)
{
    this->setHitPoint(100);
    this->setAttackDamage(100);
    this->setEnergyPoint(30);
    std::cout << "FragTrap constructor called" << std::endl;
    std::cout << this->getHitPoint() << std::endl;

    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

void FragTrap::attack(const std::string& target)
{
    if (this->getHitPoint() == 0)
    {
        std::cout << this->getName() << " is dead " << std::endl;
        return ;
    }
    if (this->getEnergyPoint() > 0)
    {   
        std::cout << "Scap Trap" <<this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        this->setEnergyPoint(getEnergyPoint() - 1);
    }
    else
        std::cout << this->getName() << " doesn't have enought energy to attack " << std::endl;
    return ;
}  

void    FragTrap::highFivesGuys(void)
{
    std::cout << this->getName() << " get a high-fives" << std::endl;
    return;
}
