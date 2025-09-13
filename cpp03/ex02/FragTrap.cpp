/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:20:49 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/25 13:47:59 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Destructors
FragTrap::FragTrap(void) : ClapTrap("")
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
	return ;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_damage = 30;
	return ;
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
	return ;
}

// Assignation operator
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_energy = other._energy;
	this->_damage = other._damage;
	this->_health = other._health;    
	return (*this);
}

// Methods
void	FragTrap::highFivesGuys(void) const
{
	if (this->_health < 1)
	{
		std::cout << "FragTrap " << this->_name << \
		" can't give a high five because it is dead !" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name \
	<< " gives a high five!" << std::endl;
    return ;
}


