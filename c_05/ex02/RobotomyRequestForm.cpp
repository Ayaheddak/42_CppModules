#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(void):Form("home", 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("home", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called\n";
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy):Form(copy.getName(), copy.getSGrade() ,copy.getEGrade())
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

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout <<" RobotomyRequestForm's destructor called \n";
}
void	RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
	if (this->getSigned() == false && executor.getGrade() > this->getEGrade())
		throw GradeTooLowException();
	std::cout << "Makes some drilling noises" << std::endl;
	srand(time(0));
	int checkrandom = rand();
	if (checkrandom % 2 == 0)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else 
		std::cout << getTarget() << " robotomized failed" << std::endl;

}