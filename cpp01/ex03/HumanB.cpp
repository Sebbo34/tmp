/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 00:26:09 by seb               #+#    #+#             */
/*   Updated: 2024/05/02 04:08:42 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
   this->weapon = NULL; 
    std::cout << "Constructor called" << std::endl;
    return ;
}

HumanB::~HumanB()
{
     std::cout << "Destructor called" << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
    return ;
}

void    HumanB::attack(void)
{
    if (this->weapon)
    {
        const std::string &str = this->weapon->getType();
        std::cout << this->name << " attacks with their " << str << std::endl;
    }
    else
        std::cout << this->name << " can't attack without weapon " << std::endl;
    return ;
}