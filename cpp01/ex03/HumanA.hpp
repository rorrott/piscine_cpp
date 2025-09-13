/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:08:10 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/19 16:40:07 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
# define HumanA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
	    std::string name;
	    Weapon &weapon;
    public:
	    HumanA(std::string name, Weapon &weapon);
	    ~HumanA(void);// {};
	    void    attack();
};

#endif
