/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:25:11 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/06 14:09:49 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
		Brain *brain;
		
public:
		// Constructor & Destructor
		Cat(void);
		~Cat(void);

		// Copy Constructor & assignation operators
		Cat(const Cat &copy);
		Cat& operator=(const Cat &other);

		// Methods
		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif