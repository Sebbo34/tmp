/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:05:09 by sbo               #+#    #+#             */
/*   Updated: 2024/05/25 11:04:10 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main(void)
{
	Animal tesr;
	WrongCat		cat;
	Dog		dog;
	
	std::cout << tesr.getType() << std::endl; 
	tesr.makeSound();

	std::cout << cat.getType() << std::endl; 
	cat.makeSound();


	std::cout << dog.getType() << std::endl; 
	dog.makeSound();
}