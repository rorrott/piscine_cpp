/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:29:34 by rtorres           #+#    #+#             */
/*   Updated: 2024/10/31 10:25:34 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickName,
				std::string phoneNumber, std::string secret):
	firstName(firstName), lastName(lastName), nickName(nickName),
	phoneNumber(phoneNumber), secret(secret), id(0) {}

Contact::Contact() : firstName(""), lastName(""), nickName(""),
					 phoneNumber(""), secret(""), id(0) {}
Contact::~Contact() {}

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickName() const { return nickName; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getSecret() const { return secret; }
int	Contact::getId() const { return id; }

void Contact::setId(int newId) { id = newId; }

