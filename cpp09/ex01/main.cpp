/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtorres <rtorres@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:43:56 by rtorres           #+#    #+#             */
/*   Updated: 2025/01/07 17:46:03 by rtorres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

float operation(int a, int b, char op)
{
    if (op == '+')
        return (b + a);
    if (op == '-')
        return (b - a);
    if (op == '*')
        return (b * a);
    if (op == '/')
    {
        if (a == 0)
        {
            std::cerr << "Error: dividion by zero" << std::endl;
            exit(1);
        }
        return (b / a);
    }
    return (INT_MIN);
}

bool    isOperand(const std::string &token)
{
    if (token.size() != 1)
        return (false);
    return (token[0] >= '0' && token[0] <= '9');
}

float   polishEvaluation(const std::string &expression)
{
    std::stack<float> stk;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        if (isOperand(token))
            stk.push(std::strtof(token.c_str(),NULL));
        else if (isOperator(token[0]) && token.size() == 1)
        {
            if (stk.size() < 2)
            {
                std::cerr << "Error: invalid expression" << std::endl;
                exit(1);
            }
            float a = stk.top(); stk.pop();
            float b = stk.top(); stk.pop();
            stk.push(operation(a, b, token[0]));
        }
        else
        {
            std::cerr << "Error: invalid input => " << token << std::endl;
            exit(1);
        }
    }
    if (stk.size() != 1)
    {
        std::cerr << "Error: invalid expression" << std::endl;
        exit(1);
    }
    return (stk.top());
}

/* int main()
{
    std::string post = "8 9 * 9 - 9 - 9 - 4 - 1 +";
    std::cout << polishEvaluation(post) << std::endl;
    std::string post2 = "7 7 * 7 -";
    std::cout << polishEvaluation(post2) << std::endl;
    std::string post3 = "1 2 * 2 / 2 * 2 4 - +";
    std::cout << polishEvaluation(post3) << std::endl;
    std::string post4 = " ";
    std::cout << polishEvaluation(post4) << std::endl;
    std::string post5 = "(1 + 1)";
    std::cout << polishEvaluation(post5) << std::endl;
    std::string post6 = "3 4 + 5 6 + *"; // (3 + 4) * (5 + 6)
    std::cout << polishEvaluation(post6) << std::endl;
    std::string post6 = "3 4 -"; // 3 - 4
    std::cout << polishEvaluation(post6) << std::endl;
    return (0);
} */

int main(int ac, char* av[])
{
    if (ac != 2)
    {
        std::cerr << "Error: invalid number of arguments" << std::endl;
        return 1;
    }
    try
    {
        std::string expression = av[1];
        float result = polishEvaluation(expression);
        std::cout << result << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: exception occured: " << e.what() << std::endl;
        return (1);
    }
    return (0);
}