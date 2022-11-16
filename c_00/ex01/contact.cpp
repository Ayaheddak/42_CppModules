/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:24:37 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/15 14:45:36 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
void	contact::setFname(std::string fn)
{
	fname = fn;
}

void	contact::setLname(std::string ln)
{
	lname = ln;
}

void	contact::setNickName(std::string nn)
{
	nickName = nn;
}

void	contact::setDarkSecret(std::string ds)
{
	darkestSecret = ds;
}

void	contact::setPhoneNb(std::string nb)
{
	phoneNb = nb;
}

std::string	contact::getFname()
{
	return (fname);
}

std::string	contact::getLname()
{
	return (lname);
}

std::string	contact::getNickName()
{
	return (nickName);
}

std::string	contact::getDarkSecret()
{
	return (darkestSecret);
}

std::string	contact::getPhoneNb()
{
	return (phoneNb);
}
