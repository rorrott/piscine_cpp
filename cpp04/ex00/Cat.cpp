/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:08:40 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 15:28:49 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor
Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

// destructor
Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

// Copy Constructor
Cat::Cat(const Cat &copy) : Animal(copy.type)
{
	*this = copy;
	return ;
}

// Assignation operator
Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

// Copy constructor
void	Cat::makeSound(void) const { std::cout << "Meow meow!!" << std::endl; }
