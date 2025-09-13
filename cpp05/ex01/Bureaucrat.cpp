/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 13:16:21 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-16 13:16:21 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat(void) : _name("null"), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHightException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
    return ;
}

// Destructor
Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = copy;
    return ;
}

// Assignation operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Bureaucrat assignation constructor called" << std::endl;
    if (this == &other)
        return (*this);
    this->_grade = other._grade;
    return (*this);
}

// Accessor
std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

// Mutators
void    Bureaucrat::incremetGrade(void)
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHightException();
    else
        this->_grade--;
}

void    Bureaucrat::decrementGrade(void)
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

void    Bureaucrat::signForm(Form fo)
{
    fo.beSigned(*this);
    if (fo.isSigned() == 1)
    {
        std::cout << this->_name + " signed " +fo.getName() << std::endl;
    }
    else
    {
        std::cout << this->_name + " could not sign" +fo.getName() + \
        "because " + "grade is too low" << std::endl;
    }
}

std::ostream &operator<<(std::ostream& ost, const Bureaucrat &copy)
{
    ost << copy.getName() << ", bureaucrat grade " << copy.getGrade();
    return (ost);
}