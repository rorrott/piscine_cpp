/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:11:58 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/04 13:42:29 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	instance1("Clap");
	ScavTrap	instance2("Scav");

	instance2.attack("Enemy");
	instance1.attack("IA");
	instance2.guardGate();
	instance1.beRepaired(4);
	instance2.beRepaired(4);
	instance2.takeDamage(5);
	instance2.beRepaired(4);

	std::cout << std::endl;
	return (0);
}
