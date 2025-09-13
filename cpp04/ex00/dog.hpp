/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:24:30 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 13:59:26 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

//# include <iostream>
//# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
public:
		// Constructor and Destructors
		Dog(void);
		~Dog(void);

		// Copy constructor and assignation operators
		Dog(const Dog &copy);
		Dog& operator=(const Dog &other);

		// Methods
		void	makeSound(void) const;
};

#endif