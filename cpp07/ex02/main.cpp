/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:30:56 by seb               #+#    #+#             */
/*   Updated: 2024/06/28 18:02:11 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <stdlib.h>
#include <stdio.h>


// copy et assignement
int main ()
{
     Array<int> test1(4);
     int i =-1;
     std::cout << "Salut" << std::endl;
     while (i++ < 4)
     {
          test1[0] = 2;
          test1[1] = 4;
          try {
               std::cout << test1[14] << std::endl;
          }
          catch (std::out_of_range const e)
          {
               std::cout << e.what() << std::endl;
          }
     }
}