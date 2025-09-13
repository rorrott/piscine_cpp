/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:10:59 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/26 10:37:15 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
private:
		std::string ideas[100];

public:
		// Constructor & Destructor
		Brain(void);
		virtual ~Brain(void);

		// Copy constructor & assignation operator
		Brain(const Brain &copy);
		Brain& operator=(const Brain &other);

		// Setters & getters
		std::string getIdea(int i) const;
		void	setIdea(int i, std::string idea);
};

#endif