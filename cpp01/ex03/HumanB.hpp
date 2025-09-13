/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:09:59 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/19 16:41:10 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
	    std::string name;
	    Weapon *weapon;
    public:
	    HumanB(std::string name);
	    ~HumanB(void);// {};
	    void    attack();
	    void    setWeapon(Weapon &weapon);
};

#endif