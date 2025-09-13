/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:59:35 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/03 09:24:50 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}

Span::Span(Span const &obj) { *this = obj; }

Span &Span::operator=(Span const &other)
{
    N = other.N;
    vec = other.vec;
    return (*this);
}

Span::~Span() {}

void    Span::addNumber(int n)
{
    if (vec.size() == N)
        throw MaxElements();
    vec.push_back(n);
}

void    Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    if (vec.size() + (unsigned int)(last - first) - 1 >= N)
        throw MaxElements();
    for (; first != last; first++)
        vec.push_back(*first);
}

long int Span::shortestSpan()
{
    if (vec.size() < 2)
        throw MinElements();
    std::vector<long int> sorted(vec);
    std::sort(sorted.begin(), sorted.end());
    long int i = 1;
    int size = sorted.size();
    long int rest;
    rest = sorted[i] - sorted[i - 1];
    while (i < size)
    {
        if (sorted[i] - sorted[i - 1] < rest)
            rest = sorted[i] - sorted[i - 1];
        i++;
    }
    return (rest);
}

long long int Span::longestSpan()
{
    if (vec.size() < 2)
        throw MinElements();
    std::vector<long int> sorted(vec);
    std::sort(sorted.begin(), sorted.end());
    int size = sorted.size() - 1;
    long int rest = sorted[size] - sorted[0];
    return (rest);
}