/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:05:57 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/04 10:06:19 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "The memory address of the variable 'brain' is: " << &brain << std::endl;
	std::cout << "The memory address stored in 'stringPTR' is:" << stringPTR << std::endl;
	std::cout << "The memory address of 'stringREF' is:" << &stringREF << std::endl;

	std::cout << "The value of the variable 'brain' is: " << brain << std::endl;
	std::cout << "The value pointed to by 'stringPTR' is: " << *stringPTR << std::endl;
	std::cout << "The value referenced by 'stringREF' is: " << stringREF << std::endl;
	return (0); 
}
