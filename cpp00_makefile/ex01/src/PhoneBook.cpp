/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:51:13 by seb               #+#    #+#             */
/*   Updated: 2024/06/01 15:22:45 by sbo              ###   ########.fr       */
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

void	PhoneBook::ChooseContact(int n)
{
	int ind;
	ind = 0;
	std::string str;
	while (1)
	{
		std::cout << "Which contact : ";
		getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!str.empty())
		{	
			ind = str[0] - '0';
			std::cout << ind << std::endl;
			if (str.length() != 1 || ind > n || ind <= 0)
				std::cout << "Bad Index please retry " << std::endl;
			else
			{
				this->print(ind - 1);
				break;
			}
		}	
	}
}

int main()
{
	PhoneBook	PhoneBook;
	int			index;
	std::string input;
	int			n;

	index = -1;
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
			std::cout << std::endl;
		}
		if (input.compare("ADD") == 0)
		{
			n++;
			if (n > 8)
				n = 8;
			index++;
			if (index == 8)
				index = 0;
			PhoneBook.ADD(index);
		}
		else if (input.compare("SEARCH") == 0 && n != 0)
		{
			PhoneBook.Search(n);
			PhoneBook.ChooseContact(n);
		}
		else if (input.compare("SEARCH") == 0 && n == 0)
			std::cout << "No Contact in this PhoneBook, please Add contact for use SEARCH" << std::endl;
		else if (input.compare("EXIT") == 0)
			break;
	}
}