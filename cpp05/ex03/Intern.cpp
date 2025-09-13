/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 14:08:22 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-17 14:08:22 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// Constructors
Intern::Intern(void)
{
    std::cout << "Intern default constructor called" << std::endl;
}

// Destructor
Intern::~Intern(void)
{
    std::cout << "Intern destructor called" << std::endl;
}

// Assignation operator
Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Intern assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_formName = other._formName;
    this->_target = other._target;
    return (*this);
}

AForm *Intern::makeForm(std::string const &formName, \
std::string const &targetName)
{
    const std::string formsName[3] = \
    {
        "shrubbery creation request", "robotomy request", \
        "presidential pardon request"
    };
    int n = -1;
    for (int i = 0; i < 3; i++)
    {
        if (formName == formsName[i])
        {
            n = i;
            break ;
        }
    }

    switch (n)
    {
        case 0:
            std::cout << "Intern create ShrubberyCreationForm" << std::endl;
            return (new ShrubberyCreationForm(targetName));
        case 1:
            std::cout << "Intern create RobotomyRequestForm" << std::endl;
            return (new RobotomyRequestForm(targetName));
        case 2:
            std::cout << "Intern create PresidentialPardonForm" << std::endl;
            return (new PresidentialPardonForm(targetName));
        default:
            throw AForm::FormNotFound();
    }
    return (0);
}