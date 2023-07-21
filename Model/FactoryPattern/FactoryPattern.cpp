//
// Created by Admin on 7/21/2023.
//


#include <string>

class AbstractProductA {
public:
    virtual ~AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};

