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

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
private :
        std::string const _name;
        int _signed;
        const int _signGrade;
        const int _execGrade;

public :
        // Constructor & destructor
        AForm(void);
        AForm(std::string const name, int const singGrade, int const execGrade);
        virtual ~AForm(void);

        // Copy constructor & assignation
        AForm(const AForm &copy);
        AForm &operator=(const AForm &other);

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
        class FormNotSignedException : public std::exception
        {
        public :
                virtual const char *what() const throw()
                {
                        return ("Form is not signed");
                }
        };

        class FormNotFound : public std::exception
        {
        public :
                virtual const char *what() const throw()
                {
                        return ("Form not found");
                }
        };

        // Accessor
        std::string getName(void) const;
        int     isSigned(void) const;
        void    setSigned(void);
        int     getSignGrade(void) const;
        int     getExecGrade(void) const;

        // Methods
        void    beSigned(const Bureaucrat &br);
        void    signForm(const Bureaucrat &br);
        virtual void    execute(Bureaucrat  const &executor) const = 0;
};

std::ostream &operator<<(std::ostream& ost, const AForm &copy);

#endif