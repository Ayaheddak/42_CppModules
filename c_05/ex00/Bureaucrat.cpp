/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 04:53:11 by aheddak           #+#    #+#             */
/*   Updated: 2022/12/09 15:56:50 by aheddak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):_name("default")
{
	std::cout << "Default Constructor called" << std::endl;
	_grade = 1;
}

Bureaucrat::Bureaucrat(std::string name , int grade):_name(name),_grade(grade)
{
	std::cout << "Constructor called" << std::endl;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy):_name(copy._name)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& obj)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->_grade = obj.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getName(void)const
{
	return (_name);
}

int Bureaucrat::getGrade(void)const
{
	return (_grade);
}

void Bureaucrat::decrement(void)
{
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
	return ;
}

void Bureaucrat::increment(void)
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
	return ;
}

void		Bureaucrat::setGrade(int grade)
{
	_grade = grade;	
}

const char * Bureaucrat::GradeTooHighException::what (void) const throw()
{
	return "Error: Grade Too high ! ";
}

const char * Bureaucrat::GradeTooLowException::what (void) const throw()
{
	return "Error: Grade Too low ! ";
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}