/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:51:13 by seb               #+#    #+#             */
/*   Updated: 2024/05/01 02:34:11 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "Contructor called" << std::endl;
    this->get_firstname();
    return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    PhoneBook::get_firstname(void)
{
    std::string test;
    while (1)
    {
        std::cout << "first name : ";
        getline(std::cin, test);
        if (std::cin.eof())
        {
            std::cout << "test " << std::endl ;
            std::cin.clear();
            clearerr(stdin);
        }
        else
            std::cout << "word" << std::endl ;
    }
}

int main()
{
    PhoneBook te;
    std::string test;
    std::cout << te.rep[0].first_name << std::endl;
}