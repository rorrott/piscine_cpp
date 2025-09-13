/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-20 15:08:51 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-20 15:08:51 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>

Array<T>::Array()
{
    this->_array = new T[0];
    this->_size = 0;
}

template <typename T>

Array<T>::Array(unsigned int n)
{
    this->_array = new T[n];
    this->_size = n;
}

template <typename T>

Array<T>::Array(const Array &copy)
{
    *this = copy;
}

template <typename T>

Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if (this == &other)
        return (*this);
    this->_size = other.size();
    this->_array = new T[other.size()];

    for (int i = 0; i < other.size(); i++)
        this->_array[i] = other._array[i];
    return (*this);
}

template <typename T>

T & ::Array<T>::operator[](int index)
{
    if (index < 0 || index >= this->_size)
        throw Array::IndexIsOutOfBounds();
    return (this->_array[index]);
}

template <typename T>

int Array<T>::size() const
{
    return (this->_size);
}

template <typename T>

Array<T>::~Array()
{
    delete [] this->_array;
}

#endif