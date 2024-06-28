/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:57:27 by seb               #+#    #+#             */
/*   Updated: 2024/06/28 21:18:40 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->N = N;
    std::cout << "Constructor called" << std::endl;
}

Span::~Span()
{
    std::cout << "Destructor called" << std::endl;
}

void    Span::addNumber(int number)
{
    if (this->container.size() > N)
        throw std::out_of_range("Erreur");
    this->container.push_back(number);
}

int    Span::shortestSpan(void)
{
    std::vector<int>::iterator current;
    std::vector<int>::iterator next;

    int shortest;

    
    current = this->container.begin();
    next = current + 1;
    shortest = *next - *current;
    sort(this->container.begin(), this->container.end());
    while (next != this->container.end())
    {
        if (*next - *current < shortest)
            shortest = *next - *current;
        current++;
        next++;
    }
    return (shortest);
}

int     Span::longestSpan(void)
{
    sort(this->container.begin(), this->container.end());
    return (*this->container.end() - *this->container.begin());
}