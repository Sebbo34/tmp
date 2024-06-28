/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:30:56 by seb               #+#    #+#             */
/*   Updated: 2024/06/28 16:43:02 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main ()
{
     Array<int> test;
     Array<char *> test1(4);
     int i =0;
     std::cout << *test1.array << std::endl;
     while (i++ < 4)
     {
          //test1.array[i] = ;
          std::cout << test1.array[i] << std::endl;
     }
}