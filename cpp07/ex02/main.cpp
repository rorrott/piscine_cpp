/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-20 14:04:54 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-20 14:04:54 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include "Array.tpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    // Initialize both arrays
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE  to test copy constructor
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    // Validate that numbers and mirror have the same values
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    // Testing bounds explicitly
    try
    {
        numbers[-2] = 0; // Testing negative index
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;  // Testing index equal to MAX_VAL (out of bounds)
        //std::cout << numbers[MAX_VAL - 2] << '\n'; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Overwrite numbers with new random values
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    // Test valid access with bounds
    try
    {
        std::cout << numbers[45] << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;//
    return 0;
}