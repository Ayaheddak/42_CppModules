#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(void):Form("home", 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form(target, 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):Form(copy._target, copy.getSGrade,copy.getEGrade)
{
	std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& obj)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called " << std::endl;
	this->_target = obj._target;
	return (*this);
}
std::string	RobotomyRequestForm::getTarget(void)const
{
	return (_target);
}
void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (this->getSigned == false || executor.getGrade() > this->getEGrade())
		throw GradeTooLowException();
	std::cout << "Makes some drilling noises" << std::endl;
	srand(time(0));
	int checkrandom = rand();
	if (checkrandom % 2 == 0)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else 
		std::cout << getTarget() << " robotomized failed" << std::endl;

}