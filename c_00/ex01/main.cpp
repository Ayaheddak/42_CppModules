/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:48:39 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/16 14:55:37 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
int SwitchToInt(std::string str)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (str[i] == ' '  || str[i] == '\t')
		i++;
	if(str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i]) 
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (str[i] != '\0')
		return (0);
	return (res);
}

int main ()
{
	std::string cmd;
	phonebook info;
	contact cont;
	std::string str;
	int	i;
	int count;
	int j;

	i = 0;
	count = 0;
	while (!std::cin.eof())
	{
		std::cout << "Enter ur choice (ADD, SEARCH , EXIT) : ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
		{
			if (i >= 2)
				i = 0;
			if (info.AddContact(i) == 1)
			{
				if (count < 2)
					count++;
				i++;
			}
		}
		else if (cmd == "SEARCH")
		{
			j = 0;
			while( j < count)
			{
				info.displayContacts(j , cont);
				j++;
			}
			std::cout << "Choice index : ";
			std::getline(std::cin, cmd);
			if (SwitchToInt(cmd) >= 1 && SwitchToInt(cmd) <= j)
				info.GetFullInfo((SwitchToInt(cmd) - 1) , cont);
			else
				std::cout << "Invalid choice !" << std::endl;
		}
		else
			std::cout << "Invalid command!" << std::endl;
	}
}
