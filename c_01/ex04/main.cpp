#include "Replace.hpp"
int main (int ac, char **av)
{
    if (ac == 4)
        replace(av);
    else
        std::cout << "Invalid arguments " << std::endl;
}