/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:52:46 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/26 10:45:31 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructor
Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

// Destructor
Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
	return ;
}

// Copy Constructor
Dog::Dog(const Dog &copy) : Animal(copy.type)
{
	this->brain = new Brain(*copy.brain);
	return ;
}

// Assignation operator
Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*other.getBrain());
	return (*this);
}

// Copy constructor
void	Dog::makeSound(void) const { std::cout << "Woof woof!!" << std::endl; }
Brain *Dog::getBrain(void) const { return (this->brain); }