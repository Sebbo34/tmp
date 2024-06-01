/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 00:26:09 by seb               #+#    #+#             */
/*   Updated: 2024/05/31 11:21:18 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    this->weapon = new Weapon;
    std::cout << "Constructor called" << std::endl;
    return ;
}

HumanB::~HumanB()
{
	delete this->weapon;
	std::cout << "Destructor called" << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon weapon)
{
	this->weapon->setType(weapon.getType());
	return ;
}

void    HumanB::attack(void)
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl; // invalid read
    }
    else
        std::cout << this->name << " can't attack without weapon " << std::endl;
    return ;
}