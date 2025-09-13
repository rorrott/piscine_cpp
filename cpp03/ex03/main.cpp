/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorro <rorro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:11:58 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/24 20:52:12 by rorro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) 
{
    DiamondTrap dog("Dog");
    std::cout << "--" << std::endl;
    dog.attack("Cat");
    dog.takeDamage(50);
    dog.beRepaired(10);
    dog.guardGate();
    dog.highFivesGuys();
    dog.whoAmI();
    std::cout << "--" << std::endl;
    DiamondTrap Cat(dog);
    Cat.whoAmI();
    std::cout << "--" << std::endl;
    DiamondTrap wolf("Wolf");
    wolf = dog;
    wolf.whoAmI();
    std::cout << "--" << std::endl;
    DiamondTrap bear("Bear");
    bear.takeDamage(50);
    bear.beRepaired(10);
    bear.guardGate();
    bear.highFivesGuys();
    bear.whoAmI();
    std::cout << "--" << std::endl;
    return (0);
}
