#include "Serialize.hpp"
int main ()
{
	Data *data;
	//Data *d2;
	Data d1;
	data = &d1;
	data->d = 5;
	uintptr_t j;
	j = serialize(data);
	// d2 = deserialize(i);
	std::cout << data << std::endl;
	std::cout << j << std::endl;
	// uintptr_t i = 0;
}