#include "easyfind.hpp"
#include <vector>
int main()
{
	try  
	{
		std::vector<int> vect;
  
    	vect.push_back(10);
    	vect.push_back(20);
    	vect.push_back(30);
		int result = easyfind(vect, 3);
		std::cout << result << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}