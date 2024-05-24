/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:02:26 by seb               #+#    #+#             */
/*   Updated: 2024/05/02 21:28:10 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Constructor Called" << std::endl;
    return ;
}

Harl::~Harl(void)
{
    std::cout << "Destructor Called" << std::endl;
    return ;
}

void    Harl::debug(void)
{
    std::cout << "debug" << std::endl;
    return ;
}

void    Harl::info(void)
{
    std::cout << "info" << std::endl;
    return ;
}
void    Harl::warning(void)
{
    std::cout << "warning" << std::endl;
}
void    Harl::error(void)
{
    std::cout << "error" << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*ptr)(void);
    if (level.compare("DEBUG") == 0)
        ptr = &Harl::debug;
    else if (level.compare("INFO") == 0)
        ptr = &Harl::info;
    else if (level.compare("WARNING") == 0)
        ptr = &Harl::warning;
    else if (level.compare("ERROR") == 0)
        ptr = &Harl::error;
    else
    {
        std::cout << "This level doesn't exist" << std::endl;
        return ;
    }
    (this->*ptr)();
}