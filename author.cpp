#include <iostream>
#include "author.h"

Author::Author(const string& name, const string& surname)
        : name(name), surname(surname) {}

void Author::print() {
    std::cout << name << " " << surname << std::endl;
}

string Author::toString() const{
    return name + " " + surname;;
}

const string &Author::getName() const {
    return name;
}

const string &Author::getSurname() const {
    return surname;
}