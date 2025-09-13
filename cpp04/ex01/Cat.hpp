/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:25:11 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 18:25:15 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
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