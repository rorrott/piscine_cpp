/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:11:27 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/19 16:38:22 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP

# include <string>
# include <iostream>

class Weapon
{
    private:
	    std::string type;
    public:
	   Weapon(std::string type);
	   ~Weapon(void);// {};
	   const std::string &getType();
	   void     setType(std::string type); 
};

#endif