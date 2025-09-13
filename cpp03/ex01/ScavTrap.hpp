/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:37:52 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/22 17:10:13 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	// Constructors and destructors
	ScavTrap(void);
	ScavTrap( std::string const name );
	~ScavTrap(void);

	// Copy constructor and assignation operator overload
	ScavTrap( const ScavTrap &copy);
	ScavTrap& operator=( const ScavTrap &other );
	
	// Methods
	void	guardGate(void) const;
	void	attack( std::string const &target );
};

#endif
