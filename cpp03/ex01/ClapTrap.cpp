/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:38:59 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/22 17:42:12 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors
ClapTrap::ClapTrap( void ): _name (""), _health(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name): _name(name), _health(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

// Copy constructor
ClapTrap::ClapTrap( const ClapTrap &copy )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
	return ;
}

// Assignation operator
ClapTrap &ClapTrap::operator=( const ClapTrap &other )
{
	std::cout << "ClapTrap copy assigment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_energy = other._energy;
	this->_damage = other._damage;
	this->_health = other._health;
	return (*this);
}

// Methods
void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy < 1)
	{
		std::cout << "ClapTrap " << this->_name \
		<< " can't attack because has no energy left!" << std::endl;
		return ;
	}
	else if (this->_health < 1)
	{
		std::cout << "ClapTrap " << this->_name << \
        " can't attack because it is dead !" << std::endl;
        return ;	
	}
	std::cout << "ClapTrap " << this->_name << " attacks " \
	<< target <<  ", causing " << this->_damage \
    << " points of damage!" << std::endl;
    this->_energy -= 1;
    return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_health < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead !" \
        << std::endl;
        return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " \
	<< amount << " points of damage!" << std::endl;
	this->_health -= amount;
	if (this->_health < 1)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energy < 1)
	{
		std::cout << "ClapTrap " << this->_name \
		<< " can't repair himself because has no energy left!" << std::endl;
        return ;
	}
	else if (this->_health < 1)
	{
		std::cout << "ClapTrap " << this->_name << \
        " can't repair himself because it is dead !" << std::endl;
        return ;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired by " \
	<< amount << " points!" << std::endl;
	this->_health += amount;
	this->_energy -= 1;
	return ;
}
