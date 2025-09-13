/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:10:50 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/06 15:18:44 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &) throw() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other) throw()
{
    if (this == &other)
        return (*this); 
    return (*this);
}

BitcoinExchange::~BitcoinExchange() throw() {}