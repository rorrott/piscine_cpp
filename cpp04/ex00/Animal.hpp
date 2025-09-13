/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:26:39 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 15:32:20 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
		std::string type;
		
public:
		// Constructors and Destructors
		Animal( void );
		Animal( std::string const name );
		virtual ~Animal( void );
		
		// Copy constructor and assignation operators
		Animal(const Animal &copy);
		Animal& operator=(const Animal &other);

		// Methods
		virtual void makeSound(void) const;
		std::string getType(void) const;
			
};

#endif