/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:00:04 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 08:55:36 by sbo              ###   ########.fr       */
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
		~Dog();
		Dog(const Dog &src);
		Dog	&operator=(Dog const & Dog);
	
		void	makeSound() const;
		std::string	getType(void) const;
		void	setIdea(std::string idea, int i);
		void	printIdeas();
};

#endif