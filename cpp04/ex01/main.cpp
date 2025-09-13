/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:00:10 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/26 10:44:28 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	int		i;
	size_t	j;
	const Animal	*animal1[20];
	Animal animal2;

	i = 0;
	while (i < 20)
	{
		if (i % 2 == 0)
			animal1[i] = new Dog();
		else
			animal1[i] = new Cat();
		i++;
	}
	j = 0;
	while (++j < 20)
		animal1[j]->makeSound();
	animal2 = *animal1[5];
	i = 0;
	while (i < 20)
	{
		delete animal1[i];
		i++;
	}
	animal2.makeSound();
	Dog bob;
	bob.getBrain()->setIdea(0, "I'm starving.. need to eat!\n");
	bob.getBrain()->setIdea(1, "I need cuddle!\n");
	std::cout << bob.getBrain()->getIdea(0) << std::endl;
	std::cout << bob.getBrain()->getIdea(1) << std::endl;

	Cat cat1;
	Cat cat2;
	cat1.getBrain()->setIdea(0, "I am eating fish\n");
	cat2 = cat1;

	Dog dog1;
	Dog dog2;
	dog1.getBrain()->setIdea(0, "I'm starving.. need to eat\n");
	dog2 = dog1;
	return (0);
}