/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:16:33 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 15:57:37 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
		std::string type;
public:
		// Constructor and Destructors
		WrongAnimal(void);
		WrongAnimal(std::string const name);
		virtual ~WrongAnimal(void);

		// Copy constructor and assignation operators
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator=(const WrongAnimal &other);

		// Methods
		void	makeSound(void) const;
		std::string getType(void) const;		
};

#endif