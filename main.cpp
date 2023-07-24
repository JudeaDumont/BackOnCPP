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

    // Factory todo: integrate json object verification into test materials.
    ConcreteFactoryA cf = ConcreteFactoryA();
    std::unique_ptr<AbstractProductA> pA(cf.CreateProductA());
    std::unique_ptr<AbstractProductB> pB(cf.CreateProductB());
    assert(pA->toString()=="{name:\"ConcreteProductA\"}");
    std::cout << pA->toString() << std::endl;
    //todo: testing the date should just check for not null
    //assert(pB->toString()=="{name:\"ConcreteProductB\", created:\"23-07-2023 03-17-04\"}");
    std::cout << pB->toString() << std::endl;

    return 0;
}
