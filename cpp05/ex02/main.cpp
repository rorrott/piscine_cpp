/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 11:22:35 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-17 11:22:35 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    // Instantiatin of a Bureaucrat
    Bureaucrat *bob = NULL;
    try
    {
        bob = new Bureaucrat("Bob", 146);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    // Test of the mutators
    try
    {
        if (bob != NULL)
            bob->incrementGrade();
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << *bob << std::endl;

    try
    {
        if (bob != NULL)
            bob->decrementGrade();
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << *bob << std::endl;

    AForm *form1 = NULL;
    AForm *form2 = NULL;
    AForm *form3 = NULL;

    try
    {
        form1 = new ShrubberyCreationForm("Valpo");
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        form2 = new RobotomyRequestForm("Bender");
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        form3 = new PresidentialPardonForm("Bob2");
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << *form1 << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << *form3 << std::endl;
    std::cout << "=====" << std::endl;

    try
    {
        if (form1 != NULL && bob != NULL)
            form1->beSigned(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form1 != NULL && bob != NULL)
            form1->signForm(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form1 != NULL && bob != NULL)
            form1->execute(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "===========" << std::endl;

    try
    {
        if (bob != NULL)
        {
            for (int i = 0; i < 80; i++)
                bob->incrementGrade();
        }
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        if (form1 != NULL && bob != NULL)
            form1->beSigned(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form1 != NULL && bob != NULL)
            form1->signForm(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form1 != NULL && bob != NULL)
            form1->execute(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "===========" << std::endl;

    try
    {
        if (form2 != NULL && bob != NULL)
            form2->beSigned(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form2 != NULL && bob != NULL)
            form2->signForm(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form2 != NULL && bob != NULL)
            form2->execute(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "===========" << std::endl;

    try
    {
        if (bob != NULL)
        {
            for (int i = 0; i < 30; i++)
                bob->incrementGrade();
        }
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form2 != NULL && bob != NULL)
            form2->beSigned(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form2 != NULL && bob != NULL)
            form2->signForm(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form2 != NULL && bob != NULL)
            form2->execute(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "===========" << std::endl;

    try
    {
        if (form3 != NULL && bob != NULL)
            form3->beSigned(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form3 != NULL && bob != NULL)
            form3->signForm(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form3 != NULL && bob != NULL)
            form3->execute(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    try
    {
        if (bob != NULL)
        {
            for (int i = 0; i < 35; i++)
                bob->incrementGrade();
        }
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form3 != NULL && bob != NULL)
            form3->beSigned(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form3 != NULL && bob != NULL)
            form3->signForm(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form3 != NULL && bob != NULL)
            form3->execute(*bob);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "===========" << std::endl;
    
    delete bob;
    delete form1;
    delete form2;
    delete form3;
    return (0);
}