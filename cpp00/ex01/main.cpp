/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:54:33 by rtorres           #+#    #+#             */
/*   Updated: 2024/10/31 10:31:17 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

/*
 * Utility function to check if a string contains only digits
*/
static bool	isDigits(const std::string &str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

/*
 * Function to check for EOF
*/
static bool	checkEOF()
{
	if (std::cin.eof())
	{
		std::cout << "End of input reached. Exiting." << std::endl;
		return (true);
	}
	return (false);
}

/*
 * Function to handle adding a new contact to the phonebook
*/
static void	addContact(Phonebook &phonebook)
{
	std::string info[5];
	const char	*prompts[] = {"First Name", "Last Name", "Nickname", "Phone Number", "Darkest Secret"};

	for (int i = 0; i < 5; ++i)
	{
		while (true)
		{
			std::cout << prompts[i] << ": ";
			std::getline(std::cin, info[i]);
			if (checkEOF()) { return ; }
			if (info[i].empty())
			{
				std::cerr << prompts[i] << " cannot be empty. Please re-enter." << std::endl;
			}
			else if (i == 3 && !isDigits(info[i]))
			{
				std::cerr << "Invalid phone number. Please enter digits only." << std::endl;
			}
			else
			{
				if (info[i].length() > 10)
				{
					info[i] = info[i].substr(0, 9) + ".";
				}
				break ;
			}
		}
	}
	Contact newContact(info[0], info[1], info[2], info[3], info[4]);
	phonebook.addContact(newContact);
}

/*
 * Function to format string to ensure fixed column width (10 characters)
*/
static std::string formatColumn(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str + std::string(10 - str.length(), ' '));
}

/*
 * Display a contact's details
*/
static void	displayContactDetails(const Contact& contact)
{
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "NickName: " << contact.getNickName() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getSecret() << std::endl;
}

/*
 * Function to search and display contacts from the phonebook
*/
static void	searchContacts(Phonebook& phonebook)
{
    if (phonebook.getLen() == 0)
	{
        std::cout << "Phonebook is empty. Add contacts first!" << std::endl;
        return;
    }
	std::cout << GREEN << "Index | First Name | Last Name  | Nickname  " << RESET << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < phonebook.getLen(); ++i)
	{
		Contact contact = phonebook.getList()[i];
		std::cout << BLUE << "   " << contact.getId() << RESET << "  | "
				<< formatColumn(contact.getFirstName()) << " | "
				<< formatColumn(contact.getLastName()) << " | "
				<< formatColumn(contact.getNickName()) << std::endl;
    }
	std::string input;
	std::cout << "Enter the contact ID to view details: ";
	std::getline(std::cin, input);
	if (checkEOF())
		return ;
	if (!isDigits(input) || input.empty()) {
		std::cout << "Invalid ID." << std::endl;
		return ;
    }
	int id;
	std::istringstream(input) >> id;
	if (id <= 0)
	{
		std::cout << "Invalid ID." << std::endl;
		return ;
	}
	for (int i = 0; i < phonebook.getLen(); ++i)
	{
		if (phonebook.getList()[i].getId() == id)
		{
			displayContactDetails(phonebook.getList()[i]);
			return ;
		}
	}
	std::cout << "Contact with ID " << id << " not found." << std::endl;
}

void	handleCommand(const std::string& command, Phonebook& phonebook)
{
	if (command == "ADD") { addContact(phonebook); }
	else if (command == "SEARCH") { searchContacts(phonebook); }
	else
	{
		std::cout << "Unknown command. Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
}

int	main()
{
	Phonebook phonebook;
	std::string command;
	
	std::cout << RED << "Available commands: ADD, SEARCH, EXIT" << RESET << std::endl;
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (checkEOF()) { break; }
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Input error. Please enter ADD, SEARCH, or EXIT." << std::endl;
			continue;
		}
		if (command == "EXIT") break;
		handleCommand(command, phonebook);
	}
	return (0);
}
