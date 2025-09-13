/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:32:08 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/22 10:34:28 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
    private:
	    int n;
	    static const int x = 8;
    public:
		// Constructor & Destructor
	    Fixed(void);
	    Fixed(const int otherx);
	    Fixed(const float otherx);
	    ~Fixed(void);
		// Copy constructor & assignation operator
	    Fixed(const Fixed &copy);
	    Fixed& operator=(const Fixed &other);
		// Getters & setters
	    int getRawBits( void ) const;
	    void    setRawBits( int const raw );
	    float toFloat( void ) const;
	    int toInt( void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& Fixed);

#endif