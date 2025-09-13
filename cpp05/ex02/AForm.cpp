/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 15:28:52 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-16 15:28:52 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors
AForm::AForm(void) : _name("null"), _signed(0), _signGrade(1), _execGrade(1)
{
    std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(std::string const name, int const singGrade, int const execGrade) : \
_name(name), _signGrade(singGrade), _execGrade(execGrade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (singGrade < 1)
        throw AForm::GradeTooHightException();
    else if (singGrade > 150)
        throw AForm::GradeTooLowException();
    else if (execGrade < 1)
        throw AForm::GradeTooHightException();
    else if (execGrade > 150)
        throw AForm::GradeTooLowException();
    else
        this->_signed = 0;
    return ;
}

// Destructor
AForm::~AForm(void)
{
    std::cout << "Form destructor called" << std::endl;
}

// Copy constructor
AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), \
_signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = copy;
    return ;
}

// Assignation operator
AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Form assignation constructor callled" << std::endl;
    if (this == &other)
        return (*this);
    this->_signed = other._signed;
    return (*this);
}

// Accessor
std::string AForm::getName(void) const
{
    return (this->_name);
}

int AForm::isSigned(void) const
{
    return (this->_signed);
}

void    AForm::setSigned(void)
{
    this->_signed = 1;
}

int AForm::getSignGrade(void) const
{
    return (this->_signGrade);
}

int AForm::getExecGrade(void) const
{
    return (this->_execGrade);
}

// Methods
void    AForm::beSigned(const Bureaucrat &br)
{
    if (br.getGrade() <= this->_signGrade)
        this->_signed = 1;
    else
        throw AForm::GradeTooLowException();
}

void    AForm::signForm(const Bureaucrat &br)
{
    if (this->_signed == 1)
        std::cout << br.getName() << " signed " << this->_name << std::endl;
    else
    {
        std::cout << br.getName() << " could not sing " << this->_name << \
        " because the grade is too low" << std::endl;
    }
}

// Overload of the output operator
std::ostream &operator<<(std::ostream& ost, const AForm &copy)
{
    ost << copy.getName() << ":" << " signed grade " << \
    copy.getSignGrade() << ", " << "Execution grade " << \
    copy.getExecGrade() << "";
    return (ost);
}