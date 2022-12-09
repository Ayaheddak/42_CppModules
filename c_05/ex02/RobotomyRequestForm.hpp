#ifndef ROBOTOMYREQUESRFORM_HPP
#define ROBOTOMYREQUESRFORM_HPP
#include <cstdlib>
class Bureaucrat;
class RobotomyRequestForm : public Form
{
	private :
		std::string _target;
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator= (const RobotomyRequestForm& obj);
		~RobotomyRequestForm(void);
		std::string	getTarget(void)const;
		void execute(Bureaucrat const & executor) const;
};

#endif