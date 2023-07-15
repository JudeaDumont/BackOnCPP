#include "contact.h"

//
// Created by Admin on 7/14/2023.
//

Contact::Contact(std::string name) : name(std::move(name)) {}

std::string Contact::getName() {
    return this->name;
}

void Contact::setName(const std::string &sName) {
    Contact::name = sName;
}
