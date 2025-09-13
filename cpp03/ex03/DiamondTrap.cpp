/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:01:06 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/24 20:44:46 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors
DiamondTrap::DiamondTrap(void) : ClapTrap("null_clap_name"), ScavTrap(), \
FragTrap(), _name("null")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_health = FragTrap::_health;
    this->_energy = ScavTrap::_energy;
    this->_damage = FragTrap::_damage;
    return;
}

DiamondTrap::DiamondTrap(std::string const name) :
ClapTrap(name + "_clap_name"),
ScavTrap(), FragTrap(), _name(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_health = FragTrap::_health;
    this->_energy = ScavTrap::_energy;
    this->_damage = FragTrap::_damage;
    return;
}

// Destructor
DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
    return;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
: ClapTrap(copy._name + "_clap_name"), ScavTrap(), FragTrap(), _name(copy._name)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = copy;
    return;
}

// Assignation operator
    DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->ClapTrap::_name = other._name + "_clap_name";
    this->_name = other._name;
    this->_health = other._health;
    this->_energy = other._energy;
    this->_damage = other._damage;
    return (*this);
}

// Methods
void DiamondTrap::attack(std::string const &target)
{
    this->ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap " << this->_name << " is a " \
    << this->ClapTrap::_name << std::endl;
}