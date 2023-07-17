#include <iostream>
#include "Model/Contact/contact.h"
#include "singleton.h"
#include <cassert>

int main() {
    Contact contact = Contact("local");
    assert(contact.getName()=="local");
    std::cout << contact.getName() << std::endl;
    contact.setName("localChange");
    assert(contact.getName()=="localChange");
    std::cout << contact.getName() << std::endl;
    Singleton& s = Singleton::GetSingleton();
    assert(s.getName()=="singleton");
    std::cout << s.getName() << std::endl;
    s.setName("singletonChange");
    assert(s.getName()=="singletonChange");
    std::cout << s.getName() << std::endl;

    return 0;
}
