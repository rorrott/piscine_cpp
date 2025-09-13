/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 10:25:29 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-17 10:25:29 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructor
PresidentialPardonForm::PresidentialPardonForm(void) :
AForm("PresidentialPardonForm", 25, 5), _target("null")
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
AForm("PresidentialPardonForm", 25, 5), _target("null")
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    this->_target = target;
    return ;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : \
AForm("PresidentialPardonForm", 25, 5), _target(copy._target)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

// Assignation operator
PresidentialPardonForm &PresidentialPardonForm::
operator=(const PresidentialPardonForm &other)
{
    std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_target = other._target;
    if (other.isSigned() == 1)
        this->setSigned();
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    if (!this->isSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
