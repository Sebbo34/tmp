/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:59:56 by sbo               #+#    #+#             */
/*   Updated: 2024/07/15 08:06:32 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string type;
	public:
		Cat();
		~Cat();
		Cat(const Cat &src);
		Cat	&operator=(Cat const & cat);
		void	makeSound() const;
		std::string	getType(void) const;
};

#endif
