/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:11:58 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/04 12:14:35 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	instance1("Number one");
	ClapTrap	instance2("Number two");

	instance1.attack("Number one");
	instance2.takeDamage(8);
	instance2.beRepaired(13);
	return (0);
}
