/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-20 13:17:45 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-20 13:17:45 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>

class Array
{
private :
		T *_array;
		int _size;
public :
		Array<T>();
		Array<T>(unsigned int n);
		~Array();

		Array<T>(const Array<T> &copy);
		Array<T> &operator=(const Array<T> &other);

		int size() const;
		T &operator[](int index);

		class IndexIsOutOfBounds : public std::exception
		{
		public :
			virtual const char *what() const throw()
			{
				return ("Index is out of bounds");
			}
		};
};

#endif