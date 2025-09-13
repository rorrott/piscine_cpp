/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:18:31 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/03 09:54:21 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    subject_test()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void    more_test()
{
    std::cout << "Testing 60 numbers:" << std::endl;
    Span sp60 = Span(60);
    for (int i = 0; i < 60; i++)
        sp60.addNumber(i);
    std::cout << "ShorterSpan: " << sp60.shortestSpan() << std::endl;
    std::cout << "LongestSpan: " << sp60.longestSpan() << std::endl;
    std::cout << std::endl;
    std::cout << "Testing Int Min/Max" << std::endl;
    Span sp = Span(5);
    sp.addNumber(2147483647);
    sp.addNumber(-2147483648);
    std::cout << "ShorterSpan: " << sp.shortestSpan() << std::endl;
    std::cout << "LongestSpan: " << sp.longestSpan() << std::endl;
    std::cout << std::endl;
    std::cout <<  "TRYING = OVERLOAD" << std::endl;
	Span spcopy = sp;
	std::cout <<  "LongestSpan: " << sp.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << sp.shortestSpan() << std::endl;
	std::cout << std::endl;
    Span sp10000 = Span(10000);
	for (int i = 0; i < 10000; i++)
		sp10000.addNumber(i);
	std::cout <<  "LongestSpan: " << sp10000.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << sp10000.shortestSpan() << std::endl;
	std::cout << std::endl;
    std::cout <<  "Testing SP50 (EXPECTED 52 and 1)" << std::endl;
	Span sp50 = Span(50);
	sp50.addNumber(2);
	sp50.addNumber(5);
	sp50.addNumber(6);
	sp50.addNumber(12);
	sp50.addNumber(7);
	sp50.addNumber(9);
	sp50.addNumber(54);
	std::cout <<  "LongestSpan: " << sp50.longestSpan() << std::endl;
	std::cout <<  "ShorterSpan: " << sp50.shortestSpan() << std::endl;
	std::cout << std::endl;
    std::cout << "Trying exceptions: " << std::endl;
    std::cout <<  "Testing an empty span" << std::endl;
	Span spexception(3);
	try
	{
		std::cout <<  "LongestSpan: " << spexception.longestSpan() << std::endl;
		std::cout <<  "ShorterSpan: " << spexception.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << "Testing just one element: " << std::endl;
    spexception.addNumber(1);
	try
	{
		std::cout <<  "LongestSpan: " << spexception.longestSpan() << std::endl;
		std::cout <<  "ShorterSpan: " << spexception.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	spexception.addNumber(1);
	spexception.addNumber(1);
    std::cout <<  "Testing maximum number of elements" << std::endl;
	try
	{
		spexception.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
    std::cout << "Subject test: " << std::endl;
    subject_test();
    std::cout << std::endl;
    std::cout << "More test: " << std::endl;
    more_test();
    return 0;
}
