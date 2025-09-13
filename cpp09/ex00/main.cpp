/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:13:42 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/07 17:43:52 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	isLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool	isValidDate(const std::string &date)
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	int		year, month, day;
	char	dash1, dash2;
	std::istringstream iss(date);

	if (!(iss >> year >> dash1 >> month >> dash2 >> day) || dash1 != '-' || dash2 != '-')
		return (false);
	if (year < 1 || month < 1 || month > 12 || day < 1)
		return (false);
	int	daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (isLeapYear(year))
		daysInMonth[1] = 29;
	return (day <= daysInMonth[month - 1]);
}

bool    isDateWithinRange(const std::string &date)
{
    int		year, month, day;
	char	dash1, dash2;
	std::istringstream iss(date);

    if (!(iss >> year >> dash1 >> month >> dash2 >> day))
        return (false);
    return (year >= 2009 && year <= 2022);
}

bool    isValidValue(const std::string &value)
{
    char    *end;
    double  val;

    val = std::strtod(value.c_str(), &end);
    if (*end != '\0' || val < 0 || val > 1000)
        return (false);
    return (true);
}

bool    loadDatabase(const std::string &filename, std::map<std::string, double>& database)
{
    std::ifstream file(filename.c_str());
    
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (false);
    }
    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        double  rate;

        if (std::getline(iss, date, ',') && iss >> rate)
            database[date] = rate;
    }
    file.close();
    return (true);
}

// Closest date
std::string findClosestDate(const std::map<std::string, double>& database, const std::string &date)
{
    std::map<std::string, double>::const_iterator it = database.lower_bound(date);

    if (it == database.end() || (it != database.begin() && it->first != date))
        --it;
    return (it->first);
}

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return (1);
    }
    std::map<std::string, double> database;
    if (!loadDatabase("data.csv", database))
        return (1);
    std::ifstream inputFile(av[1]);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    //read each entry line of the file
    std::string line;
    while (std::getline(inputFile, line))
    {
        std::istringstream iss(line);
        std::string date, valueStr;

        if (std::getline(iss, date, '|') && std::getline(iss, valueStr))
        {
            date = date.substr(0, date.find_last_not_of(" ") + 1); // erase spaces
            valueStr = valueStr.substr(valueStr.find_first_not_of(" ")); // erase space
            if (!isValidDate(date))
            {
                std::cerr << "Error: bad input => " << date << std::endl;
                continue;
            }
            if (!isValidValue(valueStr))
            {
                double val = std::atof(valueStr.c_str());
                if (val < 0)
                    std::cerr << "Error: not a positive number." << std::endl;
                else if (val > 1000)
                    std::cerr << "Error: too large a number." << std::endl;
                else
                    std::cerr << "Error: invalid number." << std::endl;
                continue;
            }
            if (!isDateWithinRange(date))
            {
                std::cerr << "Error: date must be between 2009-2022" << std::endl;
                continue;
            }
            double value = std::atof(valueStr.c_str());
            std::string closesDate = findClosestDate(database, date);
            double rate = database[closesDate];

            std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(2) << value * rate << std::endl;
        }
        else
            std::cerr << "Error: bad input => " << line << std::endl;
    }
    inputFile.close();
    return (0);
}
