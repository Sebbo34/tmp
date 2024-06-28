/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:09:20 by seb               #+#    #+#             */
/*   Updated: 2024/06/28 16:34:33 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:
    
    public:
        T *array;  
        Array<T>(void)
        {
            this->array = new T;
            std::cout << "Default constructor called" << std::endl;
        }

        ~Array<T>()
        {
            delete this->array;
             std::cout << "Destructor called" << std::endl;
        }
        Array<T>(unsigned int len)
        {
            this->array = new T[len]();
            std::cout << "Constructor called" << std::endl;
        }
};


#endif