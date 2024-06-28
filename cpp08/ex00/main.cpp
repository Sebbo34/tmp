/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:03:17 by sbo               #+#    #+#             */
/*   Updated: 2024/06/28 19:36:53 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include<deque>

int main()
{
    std::deque<int> d(5,7);        //Une deque de 5 éléments valant 6
    std::deque<int>::iterator it;  //Un itérateur sur une deque d'entiers
	int i = 0;
    //Et on itère sur la deque
    for(it = d.begin(); it!=d.end(); ++it)
    {
		i++;
        *it = i;    //On accède à l'élément pointé via l'étoile
    }
	std::cout << easyfind(d, 4) << std::endl;
    return 0;
}