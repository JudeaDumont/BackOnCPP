#include <iostream>
#include "Model/Contact/contact.h"
#include "singleton.h"

int main() {
    Contact contact = Contact("local");
    std::cout << contact.getName() << std::endl;
    contact.setName("localChange");
    std::cout << contact.getName() << std::endl;
    Singleton& s = Singleton::GetSingleton();
    std::cout << s.getName() << std::endl;
    s.setName("singletonChange");
    std::cout << s.getName() << std::endl;

    return 0;
}
