/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:46:36 by rtorres           #+#    #+#             */
/*   Updated: 2024/10/31 10:24:34 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : len(0)/*, nextId(1)*/ {}

Phonebook::~Phonebook() {}

void	Phonebook::addContact(const Contact& newContact)
{
	int index = len % 8;
	list[index] = newContact;
	list[index].setId((index % 8) + 1);
	len++;
}

Contact* Phonebook::getList()
{
	return (list); 
}

int Phonebook::getLen() const
{
	return (len < 8) ? len : 8;
}
