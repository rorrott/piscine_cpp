/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:18:14 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/22 13:21:58 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
			std::string _name;
			int	_health;
			int	_energy;
			int	_damage;
	public:
			// Constructors & Destructors
			ClapTrap( void );
			ClapTrap( std::string const name );
			~ClapTrap( void );

			// Copy constructor & assignation operator
			ClapTrap( const ClapTrap &copy );
			ClapTrap &operator=( const ClapTrap &other );
			
			// Methods
			void	attack(std::string const &target );
			void	takeDamage( unsigned int amount );
			void	beRepaired( unsigned int amount );			
};

#endif 
