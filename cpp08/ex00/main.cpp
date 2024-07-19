/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:03:17 by sbo               #+#    #+#             */
/*   Updated: 2024/07/16 17:39:41 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include<deque>

int main()
{
    std::deque<int> d(5,7);
    std::deque<int>::iterator it;
	int i = 0;
    for(it = d.begin(); it!=d.end(); ++it)
    {
		i++;
        *it = i;
        std::cout << *it << std::endl;
    }
	std::cout << easyfind(d, 4) << std::endl;
    return 0;
}