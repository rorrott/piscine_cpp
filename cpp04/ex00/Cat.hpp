/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:59:53 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/26 09:32:46 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
		// Constructor and Destructor
		Cat(void);
		~Cat(void);
		
		// Copy Constructor & assignation operators
		Cat(const Cat &copy);
		Cat& operator=(const Cat &other);
		
		// Methods
		void	makeSound(void) const;
};

#endif