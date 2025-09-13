/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:50:20 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/24 19:56:56 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    // Constructors and destructors
    ScavTrap();
    ScavTrap(std::string const _name);
    virtual ~ScavTrap(void);

    // Copy constructor and assignation operator overload
    ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(const ScavTrap &other);

    // Methods
    void attack(std::string const &target);
    void guardGate(void) const;
};

#endif