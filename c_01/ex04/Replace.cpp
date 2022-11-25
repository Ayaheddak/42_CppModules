#include "Replace.hpp"
void    replace(char **av)
{
    size_t found;
    size_t pos;
    std::string rep(".replace");
    std::string search(av[2]);
    std::string line;
    std::string r(av[3]);
    std::ifstream infile(av[1]);
    
   // pos = 0;
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
        pos = 0;
        while(((found = line.find(search, pos)) != std::string::npos) )
        {
            line.erase(found, search.size());
            line.insert(found, r);
            pos = found + r.size() ;
        }
        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }
       infile.close();
       outfile.close(); 
}
