/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-20 12:38:08 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-20 12:38:08 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>

void    iter(T *array, int length, void(*f)(T &))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

#endif