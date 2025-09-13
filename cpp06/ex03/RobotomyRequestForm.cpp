/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 10:42:18 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-17 10:42:18 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// constructors
RobotomyRequestForm::RobotomyRequestForm(void) :
AForm("RobotomyRequestForm", 72, 45), _target("null")
{
    std::cout << "RobotomyRequestForm defaul constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
AForm("RobotomyRequestForm", 72, 45), _target("null")
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->_target = target;
    return ;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
AForm("RobotomyRequestForm", 72, 45), _target(copy._target)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

// Assignation operator
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "RobotomyRequestForm assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_target = other._target;
    if (other.isSigned() == 1)
        this->setSigned();
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    if (!this->isSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    std::cout << "*BIZZZ*" << std::endl;
    std::srand(std::time(0));
    if (std::rand() % 2 ==0)
    {
        std::cout << "Target " << this->_target << " has been succesfully robotomized!" << std::endl;
    }
    else
    {
        std::cout << "Target " << this->_target << " couldn't be robotomized..." << std::endl;
    }
}