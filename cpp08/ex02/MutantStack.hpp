/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:55:59 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/03 10:18:00 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iterator>
#include <list>
#include <vector>
#include <iostream>

template <typename T>

class MutantStack : public std::stack<T>
{
public :
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack(): std::stack<T>() {}
        ~MutantStack() {}
        MutantStack(MutantStack const &copy) : std::stack<T>(copy) {}
        MutantStack &operator=(MutantStack const &other)
        {
            if (this != &other)
            {
                std::stack<T>::operator=(other);
            }
            return (*this);
        }
        iterator begin() { return std::stack<T>::c.begin(); }
        iterator end() { return std::stack<T>::c.end(); }
};