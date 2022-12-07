#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
class Bureaucrat
{
	private :
		const std::string _name;
		int _grade;
	public :
		Bureaucrat(void);
		Bureaucrat(std::string name , int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator= (const Bureaucrat& obj);
		~Bureaucrat(void);
		std::string getName(void)const;
		int getGrade(void)const;
		void increment(void);
		void decrement(void);
	class GradeTooHighException : public std::exception
	{
		public :
			const char * what (void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public :
			const char * what (void) const throw();
	};
};
std::ostream& operator<< (std::ostream& out, const Bureaucrat& obj);
#endif