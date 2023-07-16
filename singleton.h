//
// Created by Admin on 7/15/2023.
//

#ifndef UNTITLED_SINGLETON_H
#define UNTITLED_SINGLETON_H

#endif //UNTITLED_SINGLETON_H

class Singleton {
private:
    std::string name = "Singleton";

public:
    [[nodiscard]] const std::string &getName() const;

    void setName(const std::string &name);

private:
    Singleton();

public:
    static Singleton &GetSingleton();

    Singleton &operator=(Singleton const &) = delete;

    Singleton(const Singleton &) = delete;

    Singleton(Singleton &&) = delete;

    Singleton &operator=(Singleton &&) = delete;
};