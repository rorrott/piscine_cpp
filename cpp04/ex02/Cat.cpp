/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:46:20 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/26 10:48:14 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor
Cat::Cat(void)
{
	std::cout << "cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

// Destructor
Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
	return ;
}

// Copy constructor
Cat::Cat(const Cat &copy) : AAnimal(copy.type)
{
	this->brain = new Brain(*copy.brain);
	return ;
}

// Assignation operator
Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	delete this->brain;
	//this->brain = new Brain(*other.brain);//Brain(*other.getBrain());
	this->brain = new Brain(*other.getBrain());
	return (*this);
}

// Methos
void	Cat::makeSound(void) const { std::cout << "Meow meow!!" << std::endl; }

Brain *Cat::getBrain(void) const { return (this->brain); }