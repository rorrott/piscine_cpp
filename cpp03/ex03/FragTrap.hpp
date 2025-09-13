/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:51:18 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/24 19:57:06 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    // Constructors and destructors
    FragTrap(void);
    FragTrap(std::string const _name);
    virtual ~FragTrap(void);

    // Copy constructor and assignation operator overload
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(const FragTrap &other);

    // Methods
    void highFivesGuys(void) const;
};

#endif