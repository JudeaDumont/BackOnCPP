//
// Created by Admin on 7/21/2023.
//


#include <string>
#include "FactoryPattern.h"
#include "ConcreteProduct/ConcreteProduct.h"

[[nodiscard]] AbstractProductA *ConcreteFactoryA::CreateProductA() const {
    return new ConcreteProductA();
}
//    AbstractProductB *CreateProductB() const override {
//        return new ConcreteProductB1();
//    }

/**
 * Each Concrete Factory has a corresponding product variant.
 */
[[nodiscard]] AbstractProductB *ConcreteFactoryA::CreateProductB() const {
    return new ConcreteProductB();
}
//    AbstractProductB *CreateProductB() const override {
//        return new ConcreteProductB2();
//    }