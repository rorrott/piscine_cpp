/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:09:09 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/19 16:41:45 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

void    HumanA::attack()
{
	std::cout << name << "  attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA (std::string name, Weapon &weapon): name(name), weapon(weapon) {}
HumanA::~HumanA(void) {}
