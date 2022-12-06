#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
class Brain
{
    private :
        std::string _ideas[100];
    public :
        Brain();
        Brain(const Brain& copy);
        void    setIdeas(int i, std::string idea);
        std::string getIdeas(int i)const;
        Brain& operator= (const Brain& obj);
        ~Brain(void);
};
#endif