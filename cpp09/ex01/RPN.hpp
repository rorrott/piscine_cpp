/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:48:46 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/07 10:51:10 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cstdlib>
#include <climits>

class RPN
{
public :
        RPN();
        RPN(RPN const &obj) throw();
        RPN &operator=(RPN const &other) throw();
        ~RPN() throw();
};