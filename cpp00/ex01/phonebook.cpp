/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:51:13 by seb               #+#    #+#             */
/*   Updated: 2024/05/31 20:42:04 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Contructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void PhoneBook::ADD(int index)
{
	this->rep[index].setContact();
	return ;
}

void PhoneBook::Search(int index)
{
	int	i;
	i = 0;
	while (i < index && i < 8)
	{
		std::cout << "         " << i + 1 << "|";
		this->rep[i].PrintName();
		i++;
	}
}

void PhoneBook::print(int index)
{
	this->rep[index].PrintContact();
}

int main()
{
	PhoneBook	PhoneBook;
	int			index;
	std::string input;
	int			n;
	int			ind;

	index = -1;
	ind = 0;
	n = 0;
	std::cout << "Welcome to PhoneBook " << std::endl;
	std::cout << "Use ADD for add a new contact " << std::endl;
	std::cout << "Use SEARCH for search in the PhoneBook " << std::endl;
	std::cout << "Use EXIT for leave " << std::endl;
	while (1)
	{
		std::cout << "Type a command: ";
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
		}
		if (input.compare("ADD") == 0)
		{
			n++;
			index++;
			if (index == 8)
				index = 0;
			PhoneBook.ADD(index);
		}
		else if (input.compare("SEARCH") == 0 && n != 0)
		{
			PhoneBook.Search(n);
			while (1) // atoi
			{
				std::cout << "Which contact? : ";
				std::cin >> ind;
				if (std::cin.eof())
				{
					std::cin.clear();
					clearerr(stdin);
					std::cout << std::endl;
				}
				else if (ind > 8 || ind <= 0 || ind > n)
				{
					std::cout << "Bad index, please retry " << std::endl;
					std::cin.clear();
					clearerr(stdin);
				}
				else if (ind > 0 && ind <= n)
				{
					PhoneBook.print(ind - 1);
					break;
				}
			}
		}
		else if (input.compare("SEARCH") == 0 && n == 0)
			std::cout << "No Contact in this PhoneBook, please Add contact for use SEARCH" << std::endl;
		else if (input.compare("EXIT") == 0)
			break;
	}
}