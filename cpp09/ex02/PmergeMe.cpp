/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:45:36 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/09 09:45:48 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &) throw() {}

PmergeMe &PmergeMe::operator=(PmergeMe const &other) throw()
{
    if (this == &other)
        return (*this);
    return (*this);
}

PmergeMe::~PmergeMe() throw() {}