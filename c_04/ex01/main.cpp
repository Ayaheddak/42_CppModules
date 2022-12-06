#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	const Animal *animal[4];
	int index;
	// Cat c1;
	
	// c1.getBrain()->setIdeas(0, "idea");
	// Cat c2(c1);
	// std::cout << c2.getBrain()->getIdeas(0) << std::endl;
	// c2.getBrain()->setIdeas(0, "have no idea");
	// std::cout << c2.getBrain()->getIdeas(0) << std::endl;
	// std::cout << c1.getBrain()->getIdeas(0) << std::endl;
	index = -1;
	while (++index < 4)
	{
		if (index % 2 == 0)
			animal[index]= new Cat();
		else
			animal[index]= new Dog();
	}
	while (index > 0)
	{
		delete (animal[index -1]);
		index--;
	}
    delete (j);
	delete (i);
    return 0;
}