/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 13:05:26 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-16 13:05:26 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
private :
        const std::string _name;
        int _grade;

public :
        // Constructor & destructor
        Bureaucrat(void);
        Bureaucrat(std::string const name, int const grade);
        ~Bureaucrat(void);

        // Copy constructor & assignation
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &other);

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
        int getGrade(void) const;

        // Mutators
        void    incremetGrade(void);
        void    decrementGrade(void);
};

std::ostream &operator<<(std::ostream& ost, const Bureaucrat &copy);

#endif