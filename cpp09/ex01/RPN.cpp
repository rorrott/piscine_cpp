/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:51:28 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/07 10:55:11 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &) throw() {}

RPN &RPN::operator=(RPN const &other) throw()
{
    if (this == &other)
        return (*this);
    return (*this);
}

RPN::~RPN() throw() {}