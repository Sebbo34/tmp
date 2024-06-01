/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:59:56 by sbo               #+#    #+#             */
/*   Updated: 2024/05/28 11:35:19 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *Brain;
	protected:
		std::string type;
	public:
		Cat();
		~Cat() override;
		Cat(const Cat &src);
		Cat	&operator=(Cat const & Cat);
	
		void	makeSound();
		std::string	getType(void) const;
		void	setIdea(std::string idea, int i);
		void	printIdeas();
		//	test() const override;
};

#endif
