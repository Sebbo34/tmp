/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:09:20 by seb               #+#    #+#             */
/*   Updated: 2024/06/28 17:55:52 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private:
        int len;
    public:
        T *array;  
        Array<T>(void)
        {
            this->array = new T;
            std::cout << "Default constructor called" << std::endl;
        }

        ~Array<T>()
        {
            delete[] this->array;
            std::cout << "Destructor called" << std::endl;
        }
        Array<T>(unsigned int size)
        {
            this->len = size;
            this->array = new T[size + 1]();
            std::cout << "Constructor called" << std::endl;
        }
        int size(void)
        {
            return (this->len);
        }
        
        T &operator[](int i)
        {
            if (i > this->len)
                throw std::out_of_range("Out of range");
            return (this->array[i]);
        }
};

//specify pour les char et les str laisser pour les int float si class
#endif