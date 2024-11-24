#ifndef AUTHOR 
#define AUTHOR 
#include <string>
#include <iostream>

class Author
{
    private:
    std::string name;
    std::string surname;

    public:
    Author():name(""),surname(""){};
    Author(std::string name, std::string surname) : name(name), surname(surname){};

    void print()
    {
        std::cout << name << " " << surname << std::endl;
    }

    std::string toString()
    {
        return name + " " + surname;
    };

    std::string getName()
    {
        return name;
    };

    std::string getSurname()
    {
        return surname;
    };


};
#endif