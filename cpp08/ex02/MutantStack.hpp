/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 23:55:43 by sbo               #+#    #+#             */
/*   Updated: 2024/06/29 18:46:10 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>


template<typename T>
class MutantStack
{
	private :
		std::stack<T> mStack;
	public :
		void	pop(void)
		{
			this->mStack.pop();
		}
		void	push(T value)
		{
			this->mStack.push(value);
		}
		T	&top(T value)
		{
			return (this->mStack.top(value));
		}
		int size(void)
		{
			return (this->mStack.size());
		}
		bool empty()
		{
			return (this->mStack.empty())
		}
		
		class iterator 
		{
			private :
				T *it;
			public :
				// Constructor
				// destructor
				// = 
				// copy
				// overload ++ 
				// overload +
				// overload -
				// overload --
				// overload *
				// overload == 
				// overload !=
		};
		
};


#endif