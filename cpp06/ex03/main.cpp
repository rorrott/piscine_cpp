/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 14:31:54 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-17 14:31:54 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern  trump;
    
    Bureaucrat *bob = NULL;
    try
    {
        bob = new Bureaucrat("Bob", 1);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "======================" << std::endl;

    AForm *form1 = NULL;
    AForm *form2 = NULL;
    AForm *form3 = NULL;
    AForm *form4 = NULL;

    try
    {
        form1 = trump.makeForm("shrubbery creation request", "Paris");
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "======================" << std::endl;

    try
    {
        form2 = trump.makeForm("robotomy request", "Bender");
    }    
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "======================" << std::endl;

    try
    {
        form3 = trump.makeForm("presidential pardon request", "Bob2");
    }    
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "======================" << std::endl;

    try
    {
        form3 = trump.makeForm("null", "null");
    }    
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "======================" << std::endl;

    delete form1;
    delete form2;
    delete form3;
    delete form4;
    delete bob;
    return (0);
}