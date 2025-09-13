/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:52:46 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/26 10:21:36 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const AAnimal *animal1[20];

    // Create Dog and Cat objects
    for (int i = 0; i < 20; ++i)
    {
        if (i % 2 == 0)
            animal1[i] = new Dog();
        else
            animal1[i] = new Cat();
    }

    // Make sounds
    for (int j = 0; j < 20; ++j)
        animal1[j]->makeSound();

    // Free memory
    for (int i = 0; i < 20; ++i)
        delete animal1[i];

    // Test Brain copying
    Dog *woof = new Dog();
    woof->getBrain()->setIdea(0, "I'm starving.. want to eat!");
    woof->getBrain()->setIdea(1, "I want to cuddle");
    std::cout << woof->getBrain()->getIdea(0) << std::endl;
    std::cout << woof->getBrain()->getIdea(1) << std::endl;
    delete woof;

    Cat cat1;
    Cat cat2;
    cat1.getBrain()->setIdea(0, "I am eating fish");
    cat2 = cat1;

    Dog dog1;
    Dog dog2;
    dog1.getBrain()->setIdea(0, "I'm starving.. want to eat");
    dog2 = dog1;

    return 0;
}