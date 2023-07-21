//
// Created by Admin on 7/21/2023.
//

#include <string>
#include "AbstractProductA.h"
#include <chrono>
#include <ctime>
#include <sstream>
#include <iomanip>

class ConcreteProductA1 : public AbstractProductA {
private:
    const std::string name = "ConcreteProductA1";
public:
    [[nodiscard]] std::string toString() const override {
        std::stringstream ss;
        ss << "{" << "name" << ":" << name << "}";
        return ss.str();
    }
};

class ConcreteProductA2 : public AbstractProductA {
private:
    const std::string name = "ConcreteProductA2";
    const std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<double>>
            created = std::chrono::system_clock::now();


public:
    [[nodiscard]] std::string toString() const override {

        std::stringstream ss;
        ss << "{" << "name" << ":" << name << ",";
        ss << " " << "created" << ":" << std::put_time(reinterpret_cast<const tm *>(&created), std::string{}.c_str()) << "}";
        return ss.str();
    }
};