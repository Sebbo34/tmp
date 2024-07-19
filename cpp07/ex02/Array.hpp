/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:09:20 by seb               #+#    #+#             */
/*   Updated: 2024/07/16 17:08:14 by sbo              ###   ########.fr       */
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
            std::cout << "Array destructor called" << std::endl;
        }
        Array<T>(unsigned int size)
        {
            this->len = size;
            this->array = new T[size + 1]();
            std::cout << "Array Constructor called" << std::endl;
        }
        Array<T>(const Array &src)
        {
            int i;
            i = 0;
            this->len = src.len;
            this->array = new T[src.size() + 1]();
            while (i <= this->len)
            {
                this->array[i] = src.array[i];
                i++;
            }
            std::cout << "Copy constructor called" << std::endl;
        }
        Array<T> operator=(Array const &src)
        {
            if (this->array)
            {
                std::cout << "here" << std::endl;
                delete[] this->array;
            }
            int i;
            i = 0;
            this->len = src.size();
            this->array = new T[src.size() + 1]();
            while (i <= this->len)
            {
                this->array[i] = src.array[i];
                i++;
            }
            return *this;
        }
        int size(void) const
        {
            return (this->len);
        }
        T &operator[](int i)
        {
            if (i >= this->len || i < 0)
                throw std::out_of_range("Out of range");
            return (this->array[i]);
        }
};

#endif