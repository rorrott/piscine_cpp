/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:39:31 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 17:45:03 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor
Animal::Animal(void) : type("")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string const type) : type(type)
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

// Copy Constructor
Animal::Animal(const Animal &copy)
{
	*this = copy;
	return ;
}

// Assignation operator
Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

// Copy Constructor
void	Animal::makeSound(void)  const
{
	std::cout << "unknown sound!" << std::endl;
}

std::string Animal::getType(void) const { return (this->type); }