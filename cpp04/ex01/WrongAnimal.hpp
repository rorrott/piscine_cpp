/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:31:31 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 17:34:59 by rtorres          ###   ########.fr       */
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
		// Constructor & Destructor
		WrongAnimal(void);
		WrongAnimal(std::string const name);
		virtual ~WrongAnimal(void);

		// Copy constructor & assignation operators
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal& operator=(const WrongAnimal &other);

		// Methods
		void	makeSound(void) const;
		std::string getType(void) const;
};

#endif