/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 10:59:29 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-17 10:59:29 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(void) :
AForm("ShrubberyCreationForm", 145, 137), _target("null")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
AForm("ShrubberyCreationForm", 145, 137), _target("null")
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    this->_target = target;
    return ;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destrcutor called" << std::endl;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
AForm("ShrubberyCreationForm", 145, 137), _target(copy._target)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

// Assignation operator
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_target = other._target;
    if (other.isSigned() == 1)
        this->setSigned();
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    if (!this->isSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getExecGrade())
        throw AForm::GradeTooLowException();
    std::string filename = this->_target + "_shrubbery";
    std::ofstream file(filename.c_str());
    if (!file.is_open())
    {
        throw std::exception();
        return ;
    }
    std::string tree[] = {
        "       *****                 ..         ",
        "    -=-=======-           :+=----       ",
        "   ---===+:-:--:          -------==-    ",
        "  +=====*-:-:--:+        =:----==---=   ",
        " *--====+==-===++=      =----+===-==+   ",
        " :+===++++===---=-      +----+++++==+:  ",
        "  =---+++--=*+==+-      +==-=++++++++.  ",
        "  *--==+*-==*++=*-     --+++=-----===+  ",
        "  *===+++===++=+*.   .=--=+=----------: ",
        "  -+===++*==+=+**    -----+=--==+++-=+: ",
        "   *+=+**+******-    -----===+-=-===*+  ",
        "     -:=::+.: -      ++=--=+++====.:+   ",
        "        .+            =**+-*++++++.     ",
        "         *              +  **+++*       ",
        "        =*                 ++*          ",
        "        =*                  **          ",
        "        =*                   *+:        ",
        "        =*                   ##*        ",
        "        =*                  ++#*        ",
    };
    for (int i = 0; i < 19; i++)
    {
        file << tree[i] << std::endl;
    }
    file.close();
}