/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:06:22 by rtorres           #+#    #+#             */
/*   Updated: 2024/10/31 10:30:59 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cstdio>
# include <limits>

# include "Contact.hpp"

# define BLUE "\033[34m"
# define GREEN "\033[0;92m"
# define RED "\033[0;91m"
# define RESET "\033[0m"

class Phonebook
{
	private:
		Contact list[8];
		int	len;
		//int	nextId;
	public:
		Phonebook();
		~Phonebook();

		void	addContact(const Contact &newContact);
		Contact *getList();
		int	getLen() const;
};

#endif
