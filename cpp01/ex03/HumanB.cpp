/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:10:31 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/19 16:40:45 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &newweapon)
{
	this->weapon = &newweapon;
}

void    HumanB::attack()
{
	if (!this->weapon)
	{
		std::cout << name << "has no weapon" << std::endl;
	}
	else
		std::cout << name << "  attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name): name(name), weapon(NULL) {}
HumanB::~HumanB(void) {}
