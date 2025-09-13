/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:28:15 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 18:41:16 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal 
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
		Brain	*getBrain(void) const;
};

#endif