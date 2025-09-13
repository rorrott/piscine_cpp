/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:03:59 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/19 15:10:16 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;;
}

Zombie::~Zombie(void)
{
	std::cout << name << " Destroy" << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Constructor has been executed." << std::endl;
}

Zombie::Zombie(std::string name): name(name)
{
	//this->name=name;
}
