/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:14:32 by rtorres           #+#    #+#             */
/*   Updated: 2024/11/04 10:15:03 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string ft_read(const char *fd)
{
	std::ifstream File(fd);
	std::string res;
	std::string line;

	if (!File.is_open())
	{
		std::cout << "Error! Failed to open the file." << std::endl;
		return "";
	}
	while (std::getline(File, line)) { res += line + '\n'; }
	if (!res.empty() && res[res.size() - 1] == '\n')
		res.erase(res.size() - 1);
	File.close();
	return (res);
}

std::string replace_str(std::string &text, const std::string &s1, const std::string &s2)
{
	std::string result;
	std::size_t start_pos = 0;
	std::size_t found_pos;

	while ((found_pos = text.find(s1, start_pos)) != std::string::npos)
	{
		result += text.substr(start_pos, found_pos - start_pos);
		result += s2;
		start_pos = found_pos + s1.length();
	}
	result += text.substr(start_pos);
	return (result);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
	{
		std::cout << "Error: s1 cannot be an empty string" << std::endl;
		return (1);
	}
	std::string content = ft_read(filename.c_str());
	if (content.empty()) { return (1); }
	std::string replace_content = replace_str(content, s1, s2);
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cout << "Error! Failed to open the output file." << std::endl;
		return (1);
	}
	outfile << replace_content;
	outfile.close();
	std::cout << "File" << filename << ".replace has been created successfully." << std::endl;
	return (0);
}
