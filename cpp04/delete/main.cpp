/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:05:09 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 09:53:42 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"



/* int main(void)
{
	Animal tab[4];

	Cat cat[2];
	Dog dog[2];
	int i = 0;

	while (i < 2)
	{
		tab[i] = cat[i];
		tab[i + 2] = dog[i];
		i++;
	}
	i = 0;
	while(i < 4)
	{
		delete tab[i];
		i++;
	} 

} */
int main(void)
{
	//Animal fr;
	Dog test;
	Cat test2;
	const Animal* j = new Dog();
	j->makeSound();
}

