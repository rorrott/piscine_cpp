/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:57:24 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 18:03:55 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructor
WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string const type) : type(type)
{
	std::cout << "wrongAnimal constructor called" << std::endl;
	return ;
}

// destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	return ;
}

// Assignation operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

// Copy constructor
void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong sound.. Buuuuuuuuuu!" << std::endl;
}

std::string WrongAnimal::getType(void) const { return (this->type); }