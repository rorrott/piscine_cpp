/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:28:24 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/22 10:00:26 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

class Fixed
{
    private:
	    int n;
	    static const int x = 8;
    public:
		// Constructor & Destructor
	    Fixed();
	    ~Fixed();
		// Copy constructor & assignation operator
	    Fixed(const Fixed &copy);
	    Fixed& operator=(const Fixed &other);
		// Getters & setters
	    int getRawBits( void ) const;
	    void    setRawBits( int const raw );
};

#endif