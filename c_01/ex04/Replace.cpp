#include "Replace.hpp"
void    replace(char **av)
{
    size_t found;
    std::string rep(".replace");
    std::string search(av[2]);
    std::string line;
    std::string r(av[3]);
    std::ifstream infile(av[1]);
    
    if(search.empty())
    {
        std::cout << "The first string cannot be empty\n";
		return ;
    }
    if (infile.fail())
    {
        std::cout << "Cannot open this file "  << av[1] << std::endl;
        return ;
    }
    std::ofstream outfile(av[1] + rep);
    if (outfile.fail())
    {
        std::cout << "Cannot Create File ⁄n";
        return;
    }
    while (!infile.eof())
    {
        std::getline(infile,line);
        while(((found = line.find(search)) != std::string::npos) && (search.compare(r) != 0))
        {
            line.erase(found, search.size());
            line.insert(found, r);
        }
        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }
       infile.close();
       outfile.close(); 
}
