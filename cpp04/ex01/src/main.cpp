/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:05:09 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 09:37:11 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"



int main(void)
{
/* 	Animal *tab[4];
	int ind = 0;

	while (ind < 2)
	{
		tab[ind] = new Cat;	
		tab[ind + 2] = new Dog;
		ind++;
	}
	ind = 0;
	while(ind < 4)
	{
		delete tab[ind];
		ind++;
	} 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Cat cat;
	Cat newcat(cat);
	
	Dog dog;
	dog.setIdea("0", 0);
	dog.setIdea("1", 1);
	dog.printIdeas();
	Dog nDog(dog);
	nDog.printIdeas();
	nDog.setIdea("1", 0);
	nDog.printIdeas();
	dog.printIdeas(); */

	Dog basic;
{
Dog tmp = basic;
}
}
