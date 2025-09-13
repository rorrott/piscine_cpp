/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 13:53:13 by rtorres           #+#    #+#             */
/*   Updated: 2024-12-17 13:53:13 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class Intern
{
private :
        std::string _formName;
        std::string _target;

public :
        // Constructors & destructors
        Intern(void);
        virtual ~Intern(void);

        // Copy constructor & assignation operator overload
        Intern(const Intern &copy);
        Intern &operator=(const Intern &other);

        AForm *makeForm(std::string const &formName, std::string const &targetName);
};

#endif