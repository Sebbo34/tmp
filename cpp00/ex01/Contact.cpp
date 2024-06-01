/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:20:19 by sbo               #+#    #+#             */
/*   Updated: 2024/05/31 19:47:39 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(void)
{
	std::string test;
	while (1)
	{
		std::cout << "first name : ";
		getline(std::cin, test);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!test.empty())
		{	
			this->first_name = test;
			break;
		}	
	}
}
void	Contact::setNickName(void)
{
		std::string test;
	while (1)
	{
		std::cout << "nick name : ";
		getline(std::cin, test);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!test.empty())
		{	
			this->nick_name = test;
			break;
		}	
	}
}
void	Contact::setLastName(void)
{
		std::string test;
	while (1)
	{
		std::cout << "last name : ";
		getline(std::cin, test);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
		else if (!test.empty())
		{	
			this->last_name = test;
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
			this->phone_number = test;
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
			this->darkest_secret = test;
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
	print_10(this->first_name);
	std::cout << "|" ;
	print_10(this->nick_name );
	std::cout << "|" ;
	print_10(this->last_name );
	std::cout << std::endl;
}

void	Contact::PrintContact(void)
{
	std::cout << "First Name:" << this->first_name << std::endl;
	std::cout << "Last Name:" << this->last_name << std::endl;
	std::cout << "Nick Name:" << this->nick_name << std::endl;
	std::cout << "Phone Number:" << this->phone_number << std::endl;
	std::cout << "Darkest Secret:" << this->darkest_secret << std::endl;
}