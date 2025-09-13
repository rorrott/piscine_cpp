/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:14:57 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/05 15:41:48 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
public:
		// Constructor and Destructor
		WrongCat(void);
		~WrongCat(void);

		// Copy Constructor & assignation operators
		WrongCat(const WrongCat &copy);
		WrongCat& operator=(const WrongCat &other);
		
		// Methods
		void	makeSound(void) const;
};

#endif 