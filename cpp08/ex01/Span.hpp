/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:51:56 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/03 09:25:35 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
private :
        Span();
        unsigned int N;
        std::vector<long int> vec;

public :
        Span(unsigned int n);
        ~Span();
        Span &operator=(Span const &other);
        Span(Span const &obj);

        void    addNumber(int n);
        void    addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
        long int shortestSpan();
        long long int longestSpan();

        class MinElements : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("The span needs at least 2 elements!");
            }
        };

        class MaxElements : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("The span's reached the maximum number of elements!");
            }
        };
};