/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:11:58 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/25 10:01:32 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap clap("Clap");
    FragTrap frag("Frag");
    FragTrap frag_trap("Frag_trap");
    std::cout << "--" << std::endl;
    for (int i = 0; i < 3; i++) {
        clap.attack("Frag");
        frag.takeDamage(30);
    }
    frag.highFivesGuys();
    frag.beRepaired(1410);
    for (int i = 0; i < 47; i++) {
        clap.attack("Frag");
        frag.takeDamage(30);
    }
    std::cout << "ohh!! 10 damage to Frag" << std::endl;
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    std::cout << "--" << std::endl;
    frag_trap.attack("Mean");
    frag_trap = frag;
    frag_trap.attack("Mean");
    FragTrap meanie(clap);
    meanie.attack("Mean");
    std::cout << "--" << std::endl;
    return (0);
}


