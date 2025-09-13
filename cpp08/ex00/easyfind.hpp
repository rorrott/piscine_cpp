/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 08:16:26 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/03 08:44:08 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Error : public std::exception
{
    virtual const char* what() const throw()
    {
        return ("The value was not found in the container!");
    }
};

template<typename T>

void    easyfind(T& container, int num)
{
    typename T::iterator it = std::find(container.begin(), container.end(), num);
    if (it != container.end())
        std::cout << "Found: " << *it << std::endl;
    else
        throw Error();
}
