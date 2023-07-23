//
// Created by Admin on 7/22/2023.
//

#include <chrono>
#include "../AbstractProductA/AbstractProductA.h"

#ifndef UNTITLED_CONCRETEPRODUCT_H
#define UNTITLED_CONCRETEPRODUCT_H

#endif //UNTITLED_CONCRETEPRODUCT_H

class ConcreteProductA : public AbstractProductA {
private:
    const std::string name = "ConcreteProductA";
public:
    [[nodiscard]] std::string toString() const override;
};

class ConcreteProductB : public AbstractProductB {
private:
    const std::string name = "ConcreteProductB";
    time_t created = std::time(nullptr);

public:
    [[nodiscard]] std::string toString() const override;
};