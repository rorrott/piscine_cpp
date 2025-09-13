/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:52:40 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/24 19:57:44 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;

public:
    // Constructors and destructors
    DiamondTrap( void );
    DiamondTrap( std::string const _name );
    virtual ~DiamondTrap( void );

   // Copy constructor and assignation operator overload
   DiamondTrap(const DiamondTrap &copy);
   DiamondTrap &operator=(const DiamondTrap &other);

   // Methods
   void attack( std::string const &target);
   void whoAmI( void );
};

#endif
