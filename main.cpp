#include <iostream>
#include "Model/Contact/contact.h"

int main() {
    Contact contact = Contact("local");
    std::cout << contact.getName() << std::endl;
    contact.setName("localChange");
    std::cout << contact.getName() << std::endl;
    return 0;
}
