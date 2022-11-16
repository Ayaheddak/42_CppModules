/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:32:54 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/16 14:55:22 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
int is_digit(std::string str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
int	phonebook::AddContact(int i)
{
	std::cout << "Enter first name : ";
    std::getline(std::cin, First);
	std::cout << "Enter last name : ";
    std::getline(std::cin, Last);
	std::cout << "Enter nickname : ";
    std::getline(std::cin, Name);
	std::cout << "Enter DarkSecret: ";
    std::getline(std::cin, Dsecret);
	std::cout << "Enter phone number: ";
    std::getline(std::cin, PNumber);
	while (!is_digit(PNumber))
	{
		std::cout << "Enter phone number: ";
   		std::getline(std::cin, PNumber);
	}
	if (!(First.empty() ||  Last.empty() || Name.empty() ||  Dsecret.empty() || PNumber.empty()))
	{
		contacts[i].setFname(First);
		contacts[i].setLname(Last);
		contacts[i].setNickName(Name);
		contacts[i].setDarkSecret(Dsecret);
		contacts[i].setPhoneNb(PNumber);
		return (1);
	}
	return (0);
}

contact phonebook::GetContact(int i)
{
	return(contacts[i]);
}

void phonebook::displayContacts(int i, contact cont)
{
	std::string str;
	std::string s(" ---------- ---------- ---------- ---------- \n");

	cont = GetContact(i);
	std::cout << s + "|     index| FirstName|  LastName|  Nickname|\n" + s;
	std::cout << "|" << std::setw(10) << i + 1 << "|"; 
	if (cont.getFname().size() > 10)
	{
		str = cont.getFname();
		str.resize(9);
		str += ".";
		std::cout << std::setw(10) << str << "|";
	}
	else
		std::cout << std::setw(10) << cont.getFname() << "|";
	if (cont.getLname().size() > 10)
	{
		str = cont.getLname();
		str.resize(9);
		str += ".";
		std::cout << str << "|";
	}
	else
		std::cout << std::setw(10) << cont.getLname() << "|";
	if (cont.getNickName().size() > 10)
	{
		str = cont.getNickName();
		str.resize(9);
		str += ".";
		std::cout << str << "|" << std::endl;
	}
	else
		std::cout << std::setw(10) << cont.getNickName() << "|" << std::endl;
	std::cout << s;
}

void		phonebook::GetFullInfo(int i, contact cont)
{
	cont = GetContact(i);

	std::cout << "First Name : " + cont.getFname() + '\n';
	std::cout << "last Name : " + cont.getLname() + '\n';
	std::cout << "Nickname : " + cont.getNickName() + '\n';
	std::cout << "darkestSecret : " + cont.getDarkSecret() + '\n';
	std::cout << "Phone number : " + cont.getPhoneNb() + '\n';
}

