/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:57:27 by seb               #+#    #+#             */
/*   Updated: 2024/06/28 22:27:33 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    std::cout << "Constructor called" << std::endl;
}

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
    if (this->container.size() > N - 1)
        throw std::out_of_range("Erreur");
    this->container.push_back(number);
}

void    Span::range(int start, int end)
{
    int diff;

    diff = abs(end - start);
    if (diff > N)
        throw std::out_of_range("Erreur");

    if (start < end)
        diff = 1;
    else 
        diff = -1;
    while(start != end)
    {
        this->container.push_back(start);
        std::cout << start << std::endl;
        start += diff;
    }
}

int    Span::shortestSpan(void)
{
    std::vector<int>::iterator current;
    std::vector<int>::iterator next;
    int shortest;

    current = this->container.begin();
    next = current + 1;
    sort(this->container.begin(), this->container.end());
    shortest = *next - *current;
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
    return (*(this->container.end() - 1) - *this->container.begin());
}
