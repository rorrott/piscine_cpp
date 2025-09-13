/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:46:44 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/22 17:42:29 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// Constructors
ScavTrap::ScavTrap( void ) : ClapTrap("")
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_damage = 20;
	return ;
}

// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

// Copy constructor
ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
	return ;
}

// Assignation operator
ScavTrap& ScavTrap::operator=( const ScavTrap &other )
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_energy = other._energy;
	this->_damage = other._damage;
	this->_health = other._health;
	return (*this);
}

// Methods
void	ScavTrap::attack( std::string const &target )
{
	if (this->_energy < 1)
	{
		std::cout << "ScravTrap " << this->_name \
		<< " can't attack because has no energy left!" << std::endl;
        return ;
	}
	else if (this->_health < 1)
	{
		std::cout << "ScravTrap " << this->_name << \
		" can't attack because it is dead !" << std::endl;
        return ;
	}
	std::cout << "ScravTrap " << this->_name << " attacks " \
	<< target << ", causing " << this->_damage \
	<< " points of damage!" << std::endl;
	this->_energy -= 1;
	return ;
}

void	ScavTrap::guardGate(void) const
{
	if (this->_health < 1)
	{
		std::cout << "ScavTrap " << this->_name << \
		" can't entered in Gate keeper mode because it is dead !" << std::endl;
        return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
	return ;
}
