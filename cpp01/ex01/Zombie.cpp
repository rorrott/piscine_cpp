/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:01:02 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/04 10:01:20 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << name << " Destroy." << std::endl;
}

Zombie::Zombie( void )
{
	std::cout << "Constructor has been executed." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void    Zombie::setName(std::string name)
{
	this->name = name;
}
