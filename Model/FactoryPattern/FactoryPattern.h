//
// Created by Admin on 7/21/2023.
//

#ifndef UNTITLED_FACTORYPATTERN_H
#define UNTITLED_FACTORYPATTERN_H

#endif //UNTITLED_FACTORYPATTERN_H

class AbstractProductA;
class AbstractProductB;

typedef AbstractProductA AbstractProductA;

class AbstractFactory {
public:
    [[nodiscard]] virtual AbstractProductA *CreateProductA() const = 0;
    [[nodiscard]] virtual AbstractProductB *CreateProductB() const = 0;
};

class ConcreteFactoryA : public AbstractFactory {
public:
    [[nodiscard]] AbstractProductA *CreateProductA() const override;
    [[nodiscard]] AbstractProductB *CreateProductB() const override;
};
