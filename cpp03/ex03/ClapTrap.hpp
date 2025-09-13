/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:03:00 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/24 20:46:17 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
    std::string _name;
    int _health;
    int _energy;
    int _damage;

public:
    // Constructors and destructors
    ClapTrap( void );
    ClapTrap(std::string const name);
    virtual ~ClapTrap(void);

    // Copy constructor and assignation operator overload
    ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &other);
    
    // Methods
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);    
};

#endif
