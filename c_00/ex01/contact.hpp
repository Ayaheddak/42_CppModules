/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:24:40 by aheddak           #+#    #+#             */
/*   Updated: 2022/11/15 17:56:12 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>
class contact
{
	private :
		std::string fname;
		std::string lname;
 		std::string nickName;
		std::string darkestSecret;
		std::string phoneNb;
	public :
	// **************** Setters ****************************** //
		void setFname(std::string fn);
		void setLname(std::string ln);
		void setNickName(std::string nn);
		void setDarkSecret(std::string ds);
		void setPhoneNb(std::string nb);
	// **************** Getters ****************************** //
		// std::string &getFname();  // ? we can declare const after function prototype
		std::string getFname();
		std::string getLname();
		std::string getNickName();
		std::string getDarkSecret();
		std::string getPhoneNb();
};

#endif