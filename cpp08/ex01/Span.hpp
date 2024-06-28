/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:57:30 by seb               #+#    #+#             */
/*   Updated: 2024/06/28 21:10:58 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int    N;
        std::vector<int>     container;
    public :
        Span(unsigned int N);
        ~Span();
        void    addNumber(int number);
        int     shortestSpan(void);
        int     longestSpan(void);
};

#endif