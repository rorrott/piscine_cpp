/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:04:20 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/06 12:06:15 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructor
WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

// Destructor
WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy.type)
{
	*this = copy;
	return ;
}

// Assignation operator
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

// Copy construtor
void	WrongCat::makeSound(void) const
{
	std::cout << "Plop plop plop!"<< std::endl;
}
