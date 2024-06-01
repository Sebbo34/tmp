/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:20:19 by sbo               #+#    #+#             */
/*   Updated: 2024/06/01 15:19:49 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(void)
{
	std::string test;
	while (1)
	{
		std::cout << "First name : ";
		getline(std::cin, test);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!test.empty())
		{	
			this->firstName = test;
			break;
		}	
	}
}
void	Contact::setNickName(void)
{
		std::string test;
	while (1)
	{
		std::cout << "Nick name : ";
		getline(std::cin, test);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!test.empty())
		{	
			this->nickName = test;
			break;
		}	
	}
}
void	Contact::setLastName(void)
{
		std::string test;
	while (1)
	{
		std::cout << "Last name : ";
		getline(std::cin, test);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!test.empty())
		{	
			this->lastName = test;
			break;
		}	
	}
}
void	Contact::setPhoneNumber(void)
{
		std::string test;
	while (1)
	{
		std::cout << "Phone Number: ";
		getline(std::cin, test);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!test.empty())
		{	
			this->phoneNumber = test;
			break;
		}	
	}
}
void	Contact::setDarkestSecret(void)
{
		std::string test;
	while (1)
	{
		std::cout << "Darkest Secret : ";
		getline(std::cin, test);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!test.empty())
		{	
			this->darkestSecret = test;
			break;
		}	
	}
}

void	Contact::setContact(void)
{
	this->setFirstName();
	this->setNickName();
	this->setLastName();
	this->setPhoneNumber();
	this->setDarkestSecret();
}

void	print_10(std::string str)
{
	int len;
	int i;
	
	i = 0;
	len = str.length();
	while(len < 10)
	{
		std::cout << " ";
		len++;
		i++;
	}
	len = i;
	i = 0;
	while (len + i < 10)
	{
		if (str[i + 1] && len + i == 9)
			std::cout << ".";
		else
			std::cout << str[i];
		i++;
	}
}

void	Contact::PrintName(void)
{
	print_10(this->firstName);
	std::cout << "|" ;
	print_10(this->nickName );
	std::cout << "|" ;
	print_10(this->lastName );
	std::cout << std::endl;
}

void	Contact::PrintContact(void)
{
	std::cout << "First Name:" << this->firstName << std::endl;
	std::cout << "Last Name:" << this->lastName << std::endl;
	std::cout << "Nick Name:" << this->nickName << std::endl;
	std::cout << "Phone Number:" << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret:" << this->darkestSecret << std::endl;
}