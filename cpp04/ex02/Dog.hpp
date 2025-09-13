/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:28:15 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/06 14:10:10 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal 
{
private:
		Brain *brain;

public:
		// Constructor & Destructors
		Dog(void);
		~Dog(void);

		// Copy constructors & assignations operators
		Dog(const Dog &copy);
		Dog& operator=(const Dog &other	);

		// /methods
		void	makeSound(void) const;
		Brain 	*getBrain(void) const;
};

#endif