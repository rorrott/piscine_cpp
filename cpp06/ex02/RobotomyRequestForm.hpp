/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 09:46:20 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-17 09:46:20 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private :
        std::string _target;
public  :
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string const target);
        ~RobotomyRequestForm(void);

        // Copy constructor & assignation operator overload
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

        void    execute(Bureaucrat const &executor) const;
};

#endif