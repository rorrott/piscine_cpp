/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-20 12:10:54 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-20 12:10:54 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>

void    swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp; 
}

template <typename T>

T   min(const T& a, const T& b)
{
    return (a < b ? a : b);
}

template <typename T>

T max(const T& a, const T& b)
{
    return (a > b ? a : b);
}

#endif