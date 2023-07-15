//
// Created by Admin on 7/14/2023.
//
#include <string>
#include <utility>

#ifndef UNTITLED_CONTACT_H
#define UNTITLED_CONTACT_H

#endif //UNTITLED_CONTACT_H

class Contact {
public:
    explicit Contact(std::string name);

private:
    std::string name;
public:
    [[nodiscard]] std::string getName();

    void setName(const std::string &sName);
};
