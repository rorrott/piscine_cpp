/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:28:59 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/04 10:29:15 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(): n(0)
{
	std::cout << "Default contructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->n = copy.n;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

void    Fixed::setRawBits ( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->n = raw;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &other) { this->n = other.getRawBits(); }
	return (*this);
}
