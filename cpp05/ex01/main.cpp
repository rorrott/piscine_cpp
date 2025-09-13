/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 16:14:58 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-16 16:14:58 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // Instantiation of bureaucrat
    Bureaucrat *bob = NULL;
    try
    {
        bob = new Bureaucrat("Bob", 10);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    // Test of mutators
    try
    {
        if (bob != NULL)
            bob->incremetGrade();
    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << *bob << std::endl;
    try
    {
        if (bob != NULL)
            bob->decrementGrade();
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    std::cout << *bob << std::endl;

    Form *form1 = NULL;
    try{
        form1 = new Form("Construction", 5, 1);
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    std::cout << *form1 << std::endl;
    try
    {
        if (form1 != NULL && bob != NULL)
            form1->beSigned(*bob);
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form1 != NULL && bob != NULL)
            form1->signForm(*bob);
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (bob != NULL)
        {
            bob->incremetGrade();
            bob->incremetGrade();
            bob->incremetGrade();
            bob->incremetGrade();
            bob->incremetGrade();
        }
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form1 != NULL && bob != NULL)
            form1->beSigned(*bob);
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    try
    {
        if (form1 != NULL && bob != NULL)
            form1->signForm(*bob);
    }
    catch(std::exception &ex){
        std::cout << ex.what() << std::endl;
    }
    delete bob;
    delete form1;
    return (0);
}