/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:05:28 by sbo               #+#    #+#             */
/*   Updated: 2024/05/28 11:35:04 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	private :
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal() = 0;
		Animal(const Animal &src);
		Animal	&operator=(Animal const & animal);
		
		void	makeSound();
		std::string	getType(void) const;
	//	virtual	void test() const = 0;

};

#endif