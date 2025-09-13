/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:46:20 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/26 10:38:13 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

// Destructor
Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

// Copy constructor
Brain::Brain(const Brain &copy)
{
	*this = copy;
	return ;
}

// Assignation operator
Brain &Brain::operator=(const Brain &other)
{
	if (this == &other)
        return *this;

    for (int i = 0; i < 100; ++i)
        this->ideas[i] = other.ideas[i];

    return (*this);
}

// Setters & getters
std::string Brain::getIdea(int i) const
{
	if (i < 0 || i >= 100)
		return ("");
	return (this->ideas[i]);
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i >= 100)
		return ;
	this->ideas[i] = idea;
} 