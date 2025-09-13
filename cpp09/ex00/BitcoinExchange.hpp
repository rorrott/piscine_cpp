/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:07:45 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/06 15:10:36 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>
#include <iomanip>

class BitcoinExchange
{
public :
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &obj) throw();
        BitcoinExchange &operator=(BitcoinExchange const &other) throw();
        ~BitcoinExchange() throw();
};