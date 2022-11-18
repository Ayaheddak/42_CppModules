/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:32:54 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/17 06:56:19 by aheddak          ###   ########.fr       */
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

void phonebook::displayContacts(contact cont, int count)
{
	std::string str;
	int j;

	j =0;
	std::string s(" ---------- ---------- ---------- ---------- \n");
	std::cout << s + "|     index| FirstName|  LastName|  Nickname|\n" + s;
	while (j < count)
	{
	cont = GetContact(j);
	std::cout << "|" << std::setw(10) << j + 1 << "|"; 
		
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
	j++;
	}
	std::cout << s;
}

void		phonebook::GetFullInfo(int j, contact cont)
{
	std::string cmd;
	int	index;
	char *str;
	long i;

	str = NULL;
	std::cout << "Choice index : ";
	std::getline(std::cin, cmd);
	i = strtol(cmd.c_str(),&str,10);
	index = i;
	if ((index >= 1 && index <= j) && !str[0])
	{
		cont = GetContact(index - 1);
		std::cout << "First Name : " + cont.getFname() + '\n';
		std::cout << "last Name : " + cont.getLname() + '\n';
		std::cout << "Nickname : " + cont.getNickName() + '\n';
		std::cout << "darkestSecret : " + cont.getDarkSecret() + '\n';
		std::cout << "Phone number : " + cont.getPhoneNb() + '\n';	
	}
	else
		std::cout << "Invalid choice !" << std::endl;
}

