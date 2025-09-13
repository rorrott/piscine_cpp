/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:38:46 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/07 09:50:26 by rtorres          ###   ########.fr       */
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

// copy constructor
void	WrongCat::makeSound(void) const
{
	std::cout << "Plop plop plop!!" << std::endl;
}

