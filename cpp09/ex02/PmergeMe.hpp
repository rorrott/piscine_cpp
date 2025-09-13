/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:45:17 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/09 09:45:33 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <set>
#include <iterator>

class PmergeMe
{
public :
        PmergeMe();
        PmergeMe(PmergeMe const &obj) throw();
        PmergeMe &operator=(PmergeMe const &other) throw();
        ~PmergeMe() throw();
};