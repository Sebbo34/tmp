/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:00:04 by sbo               #+#    #+#             */
/*   Updated: 2024/05/28 11:34:46 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *Brain;
	protected:
		std::string type;
	public:
		Dog();
		~Dog() override;
		Dog(const Dog &src);
		Dog	&operator=(Dog const & Dog);
	
		void	makeSound();
		std::string	getType(void) const;
		void	setIdea(std::string idea, int i);
		void	printIdeas();
		//void test() const override;
};

#endif