/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:51:45 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 15:08:02 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

// Constructor
Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

// Destructor
Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

// Copy Constructor
Dog::Dog(const Dog &copy) : Animal(copy.type)
{
	*this = copy;
	return ;
}

// Assignation operator
Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

// Copy constructor
void	Dog::makeSound(void) const { std::cout << "Woof woof!!" << std::endl; }
