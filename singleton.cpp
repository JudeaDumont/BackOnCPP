//
// Created by Admin on 7/15/2023.
//
#include <memory>
#include "singleton.h"

Singleton::Singleton() = default;

Singleton &Singleton::GetSingleton() {
    static std::shared_ptr<Singleton> s{new Singleton};
    return *s;
}

const std::string &Singleton::getName() const {
    return name;
}

void Singleton::setName(const std::string &n) {
    Singleton::name = n;
}

