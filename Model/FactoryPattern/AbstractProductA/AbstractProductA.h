//
// Created by Admin on 7/21/2023.
//

#include <string>

#ifndef UNTITLED_ABSTRACTPRODUCTA_H
#define UNTITLED_ABSTRACTPRODUCTA_H

#endif //UNTITLED_ABSTRACTPRODUCTA_H

class AbstractProductA {
public:
    virtual ~AbstractProductA() = default;
    [[nodiscard]] virtual std::string toString() const = 0;
};