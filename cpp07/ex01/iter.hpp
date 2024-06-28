/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:57:09 by seb               #+#    #+#             */
/*   Updated: 2024/06/27 23:14:09 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Func>
void    iter(T *array, int lenght, Func func)
{
    int i;

    i = 0;
    while(i < lenght)
    {
        func(array[i]);
        i++;
    }
}

#endif