/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:20:48 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/26 10:03:46 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
protected:
		std::string type;

public:
		// Constructors & Destructors
		AAnimal(void);
		AAnimal(std::string const name);
		virtual ~AAnimal(void);

		// Copy constructor & assignation operators
		AAnimal(const AAnimal &copy);
		AAnimal& operator=(const AAnimal &other);

		// Methods
		virtual void	makeSound(void) const = 0;
		virtual std::string getType(void) const;
};

#endif
