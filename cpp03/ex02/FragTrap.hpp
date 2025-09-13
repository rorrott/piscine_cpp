/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:13:35 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/24 18:57:00 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
public:
    // Constructors and destructors
    FragTrap(void);
    FragTrap(std::string const name);
    ~FragTrap(void);

    // Copy constructor and assignation operator overload
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(const FragTrap &other);
    
    // Methods
    void highFivesGuys(void) const;
};

#endif
