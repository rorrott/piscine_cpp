/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:11:41 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/19 16:38:48 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void    Weapon::setType(const std::string newtype)
{
	type = newtype;
}

const std::string &Weapon::getType() { return (type); }

Weapon::Weapon(std::string type): type(type) {}

Weapon::~Weapon(void) {}
