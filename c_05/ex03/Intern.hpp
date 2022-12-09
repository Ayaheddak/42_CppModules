#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
class Intern
{
	public :
		Intern(void);
		Intern(const Intern& copy);
		Intern& operator= (const Intern& obj);
		~Intern(void);
		Form * makeForm(std::string name, std::string target);
	class DoesntExistException : public std::exception
	{
		public :
			const char * what (void) const throw();
	};
};
#endif