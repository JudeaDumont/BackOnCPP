//
// Created by Admin on 7/22/2023.
//


#include <sstream>
#include <iomanip>
#include "ConcreteProduct.h"

[[nodiscard]] std::string ConcreteProductA::toString() const {
    std::stringstream ss;
    ss << "{" << "name" << ":" << name << "}";
    return ss.str();
}

[[nodiscard]] std::string ConcreteProductB::toString() const {

    std::stringstream ss;
    ss << "{" << "name" << ":" << name << ",";
    ss << " " << "created" << ":" << std::put_time(reinterpret_cast<const tm *>(&created), std::string{}.c_str())
       << "}";
    return ss.str();
}