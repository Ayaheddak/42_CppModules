#include "Base.hpp"
Base::~Base()
{

}

Base * generate(void)
{
	srand(time(0));
	int index = rand();
	if (index % 3 == 1)
		return (new A());
	else if (index % 3 == 0)
		return (new B());
	return (new C());
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "The actual type is A" << std::endl;
		return ;
	}
	B	*b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "The actual type is B" << std::endl;
		return ;
	}
	C	*c = dynamic_cast<C*>(p);
	if (c)
	{
		std::cout << "The actual type is C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try 
	{
        A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The actual type is A ! " << std::endl;
    }
    catch(std::bad_cast)
	{
        try 
		{
    	   	B &a = dynamic_cast<B&>(p);
			(void)a;
			std::cout << "The actual type is B !" << std::endl;
    	}
    	catch(std::bad_cast)
		{
    	    try 
			{
   				C &a = dynamic_cast<C&>(p);
				(void)a;
				std::cout << "The actual type is C !" << std::endl;
    		}
    		catch(std::bad_cast)
			{
    		   std::cout << "Can't cast\n";
			}
    }
	
    }
	
}