/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 13:51:49 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-16 13:51:49 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // Bad bureaucrat
    try
    {
        Bureaucrat *Badtrump1 = new Bureaucrat("", 10);
        delete Badtrump1;
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        Bureaucrat *Badtrump2 = new Bureaucrat("Trump", 0);
        delete Badtrump2;
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        Bureaucrat *Badtrump3 = new Bureaucrat("Trump", 151);
        delete Badtrump3;
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    // Instantiation of bureaucrat
    Bureaucrat *trump = NULL;
    try
    {
        trump = new Bureaucrat("Trump", 150);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    // Test of mutators
    try
    {
        if (trump != NULL)
        {
            trump->incremetGrade();
            std::cout << *trump << std::endl;
        }
    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (trump != NULL)
        {
            trump->decrementGrade();
            std::cout << *trump << std::endl;
        }
    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    delete trump;
    return (0);
}