/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:25:13 by seb               #+#    #+#             */
/*   Updated: 2024/05/31 19:36:22 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	darkest_secret;
		std::string	phone_number;
	public :
		void	setFirstName(void);
		void	setNickName(void);
		void	setLastName(void);
		void	setPhoneNumber(void);
		void	setDarkestSecret(void);
		void	setContact(void);
		void	PrintName(void);
		void	PrintContact(void);
};

#endif