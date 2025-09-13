/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:39:31 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/06 14:12:23 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructor
AAnimal::AAnimal(void) : type("")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string const type) : type(type)
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

// Destructor
AAnimal::~AAnimal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

// Copy Constructor
AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
	return ;
}

// Assignation operator
AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

// Copy Constructor
void	AAnimal::makeSound(void)  const
{
	std::cout << "unknown sound!" << std::endl;
}

std::string AAnimal::getType(void) const { return (this->type); }