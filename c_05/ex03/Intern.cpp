#include "Intern.hpp"
Intern::Intern(void) 
{
	std::cout << "Intern's default constructor called\n";
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern Copy Constructor Called" << std::endl;
	*this = copy;
}

Intern& Intern::operator= (const Intern& obj)
{
	std::cout << "Intern Copy assignment operator called " << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout <<" Intern's destructor called \n";
}
const char *Intern::DoesntExistException::what (void) const throw()
{
	return (" Element not found ");
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3]= {"robotomy request", "Presidential pardon", "Shrubbery creation"};
	Form *objects[3]={new RobotomyRequestForm(), new PresidentialPardonForm(), new ShrubberyCreationForm()};
	Form *res;
	int i;
	for (i = 0; i < 3; i++)
	{
		if (name == tab[i])
		{
			res  = objects[i];
			break ;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		if (i != j)
			delete(objects[j]);
	}
	if (i == 3)
		throw DoesntExistException();
	return (res);
}