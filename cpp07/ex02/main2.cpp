/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:30:56 by seb               #+#    #+#             */
/*   Updated: 2024/07/16 15:33:49 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <stdlib.h>
#include <stdio.h>


// copy et assignement
/* int main ()
{
     Array<int> test1(4);
     int i =-1;
     while (i++ < 8)
     {
          test1[0] = 2;
          test1[1] = 4;
          try {
               std::cout << test1[i] << std::endl;
          }
          catch (std::out_of_range const e)
          {
               std::cout << e.what() << std::endl;
          }
     }
     Array<int> test2(test1);
     test1[0] = 7878;
     std::cout << test2[0] << std::endl;
     std::cout << test1[0] << std::endl;
     test1 = test2;
     std::cout << test2[0] << std::endl;
     std::cout << test1[0] << std::endl;
     test2[0] =  8484;
     std::cout << test2[0] << std::endl;
     std::cout << test1[0] << std::endl;
} */