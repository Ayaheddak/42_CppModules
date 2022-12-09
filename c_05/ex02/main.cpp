/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 05:52:52 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/09 19:42:29 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	try
	{
		Bureaucrat bure;
		ShrubberyCreationForm shru1("hello");
		RobotomyRequestForm robo1("target");
		PresidentialPardonForm president1;
		shru1.execute(bure);
		robo1.execute(bure);
		president1.execute(bure);
		bure.executeForm(shru1);
		bure.setGrade(0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Continue ! \n";
}