/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:16:23 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/19 16:50:12 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <fstream>

class Harl
{
    private:
	    void    debug();
	    void    info();
	    void    warning();
	    void    error();
    public:
	    Harl(void);// {};
	    ~Harl(void);// {};
	    void    complain(std::string level);
};

#endif