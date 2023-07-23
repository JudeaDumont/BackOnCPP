//
// Created by Admin on 7/22/2023.
//


#include <sstream>
#include <iomanip>
#include "ConcreteProduct.h"

[[nodiscard]] std::string ConcreteProductA::toString() const {
    std::stringstream ss;
    ss << "{" << "name" << ":\"" << name << "\"}";
    return ss.str();
}

[[nodiscard]] std::string ConcreteProductB::toString() const {
    tm stupid = *std::localtime(&created);
    std::stringstream ss;
    ss << "{" << "name" << ":\"" << name << "\",";
    ss << " " << "created" << ":\"" << std::put_time(&stupid, "%d-%m-%Y %H-%M-%S")
       << "\"}";
    return ss.str();
}