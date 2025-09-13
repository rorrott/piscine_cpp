/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 14:51:12 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-16 14:51:12 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
private :
        std::string const _name;
        int _signed;
        const int _signGrade;
        const int _execGrade;

public :
        // Constructor & destructor
        Form(void);
        Form(std::string const name, int const singGrade, int const execGrade);
        ~Form(void);

        // Copy constructor & assignation
        Form(const Form &copy);
        Form &operator=(const Form &other);

        class GradeTooHightException : public std::exception
        {
        public :
                virtual const char *what() const throw()
                {
                    return ("Grade is too Hight!");
                }
        };

        class GradeTooLowException : public std::exception
        {
        public :
                virtual const char *what() const throw()
                {
                    return ("Grade is too Low!");
                }
        };

        // Accessor
        std::string getName(void) const;
        int isSigned(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;

        // Methods
        void    beSigned(const Bureaucrat &br);
        void    signForm(const Bureaucrat &br); 
};

std::ostream &operator<<(std::ostream& ost, const Form &copy);

#endif