#include <iostream>
#include "Model/Contact/contact.h"
#include "singleton.h"
#include "Model/FactoryPattern/AbstractProductA/AbstractProductA.h"
#include "Model/FactoryPattern/FactoryPattern.h"
#include <cassert>
#include <memory>

int main() {
    Contact contact = Contact("local");
    assert(contact.getName()=="local");
    std::cout << contact.getName() << std::endl;
    contact.setName("localChange");
    assert(contact.getName()=="localChange");
    std::cout << contact.getName() << std::endl;

    // Singleton
    Singleton& s = Singleton::GetSingleton();
    assert(s.getName()=="singleton");
    std::cout << s.getName() << std::endl;
    s.setName("singletonChange");
    assert(s.getName()=="singletonChange");
    std::cout << s.getName() << std::endl;

    // Factory
    ConcreteFactoryA cf = ConcreteFactoryA();
    std::unique_ptr<AbstractProductA> pA(cf.CreateProductA());
    std::unique_ptr<AbstractProductB> pB(cf.CreateProductB());
    std::cout << pA->toString() << std::endl;
    std::cout << pB->toString() << std::endl;

    return 0;
}
