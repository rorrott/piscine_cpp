/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:11:15 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/09 09:59:18 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename InputIterator>
bool    isDouble(InputIterator begin, InputIterator end)
{
    std::set<typename std::iterator_traits<InputIterator>::value_type> seen;
    for (InputIterator it = begin; it != end; ++it)
    {
        if (seen.find(*it) != seen.end())
            return (true);
        seen.insert(*it);
    }
    return (false);
}

bool isInt(const std::string &str)
{
    if (str.empty())
        return (false);
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (!std::isdigit(str[i]))
            return (false);
    }
    // Convert the string to an integer and check if it's positive
    int value = std::atoi(str.c_str());
    if (value <= 0)
        return (false);
    return (true);
}

void    vecMergeInsert(std::vector<int> &arr, int left, int right)
{
    int size = right - left + 1;

    // arrays of size 1 or 2
    if (size <= 1)
        return ;
    if (size == 2)
    {
        if (arr[left] > arr[right])
            std::swap(arr[left], arr[right]);
        return ;
    }
    // split arr into pairs and sort each pair
    std::vector<int> smaller, larger;
    for (int i = left; i + 1 <= right; i += 2)
    {
        if (arr[i] < arr[i + 1])
        {
            smaller.push_back(arr[i]);
            larger.push_back(arr[i + 1]);
        }
        else
        {
            smaller.push_back(arr[i + 1]);
            larger.push_back(arr[i]);
        }
    }
    // handle odd number of elements
    if (size % 2 != 0)
        smaller.push_back(arr[right]);
    // recursively sort the smaller and larger list
    vecMergeInsert(smaller, 0, smaller.size() - 1);
    vecMergeInsert(larger, 0, larger.size() - 1);
    // merge the 2 sorted lists
    std::vector<int> result;
    std::vector<int>::iterator it1 = smaller.begin();
    std::vector<int>::iterator it2 = larger.begin();

    while (it1 != smaller.end() && it2 != larger.end())
    {
        if (*it1 <= *it2)
        {
            result.push_back(*it1);
            ++it1;
        }
        else
        {
            result.push_back(*it2);
            ++it2;
        }
    }
    // append any remaind elements from smaller and larger
    while (it1 != smaller.end())
    {
        result.push_back(*it1);
        ++it1;
    }
    while (it2 != larger.end())
    {
        result.push_back(*it2);
        ++it2;
    }
    // copy result back to the original arr
    for (int i = left, j = 0; i <= right; ++i, ++j)
        arr[i] = result[j];
}

void    vecMergeInsert(std::vector<int> &arr)
{
    vecMergeInsert(arr, 0, arr.size() - 1);
}

void    queueMergeInsert(std::queue<int> &arr, int size)
{
    if (size <= 1)
        return ;
    if (size == 2)
    {
        int first = arr.front(); arr.pop();
        int second = arr.front(); arr.pop();

        if (first > second)
            std::swap(first, second);
        arr.push(first);
        arr.push(second);
        return ;
    }
    // split into pairs and sort them
    std::queue<int> smaller, larger;
    for (int i = 0; i + 1 < size; i += 2)
    {
        int first = arr.front(); arr.pop();
        int second = arr.front(); arr.pop();

        if (first < second)
        {
            smaller.push(first);
            larger.push(second);
        }
        else
        {
            smaller.push(second);
            larger.push(first);
        }
    }
    // handle odd numbers of elements
    if (size % 2 != 0)
    {
        smaller.push(arr.front());
        arr.pop();
    }
    // recursively sort the smaller and larger queues
    queueMergeInsert(smaller, smaller.size());
    queueMergeInsert(larger, larger.size());

    // merge the 2 sorted queues
    std::queue<int> result;
    while (!smaller.empty() && !larger.empty())
    {
        if (smaller.front() <= larger.front())
        {
            result.push(smaller.front());
            smaller.pop();
        }
        else
        {
            result.push(larger.front());
            larger.pop();
        }
    }
    // append any remaining elements
    while (!smaller.empty())
    {
        result.push(smaller.front());
        smaller.pop();
    }
    while (!larger.empty())
    {
        result.push(larger.front());
        larger.pop();
    }
    // move result back to the original queue
    while (!result.empty())
    {
        arr.push(result.front());
        result.pop();
    }
}

void    queueMergeInsert(std::queue<int> &arr)
{
    queueMergeInsert(arr, arr.size());
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cerr << "Error: Provide a list of integers as input." << std::endl;
        return (1);
    }
    std::vector<int> vec;
    std::queue<int> que;

    for (int i = 1; i < argc; ++i)
    {
        std::string arg(argv[i]);
        // adding value
        if (!isInt(arg))
        {
            std::cerr << "Error: Invalid input detected." << std::endl;
            return (1);
        }
        int value = std::atoi(arg.c_str());
        vec.push_back(value);
        que.push(value);
    }
    if (vec.size() > 3000)
    {
        std::cerr << "Error: Input exceeds the maximum limit of 3000 integers." << std::endl;
        return (1);
    }
    // Display the original list
    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); ++i) std::cout << vec[i] << " ";
    std::cout << std::endl;
    // duplicates
    if (isDouble(vec.begin(), vec.end()))
    {
        std::cout << "Error: there is a duplicate." << std::endl;
        return (1);
    }
    // Measure sorting time for vector
    clock_t startVec = clock();
    vecMergeInsert(vec);
    clock_t endVec = clock();
    double vecTime = (double)(endVec - startVec) * 1000.0 / CLOCKS_PER_SEC;
    // Measure sorting time for queue
    clock_t startQue = clock();
    queueMergeInsert(que);
    clock_t endQue = clock();
    double queTime = (double)(endQue - startQue) * 1000.0 / CLOCKS_PER_SEC;
    // Display the sorted list
    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i) std::cout << vec[i] << " ";
    std::cout << std::endl;
    // Display timing information
    std::cout << "Time to process a range of " << vec.size()
              << " elements with std::vector is: " << vecTime << " ms." << std::endl;
    std::cout << "Time to process a range of " << vec.size()
              << " elements with std::queue is: " << queTime << " ms." << std::endl;
    return (0);
}
