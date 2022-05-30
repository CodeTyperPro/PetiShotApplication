#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include<iostream>
#include<string.h>
#include<vector>

class Animal{
    friend std::ostream &operator<<(std::ostream &os, const Animal& animal);
private:
    static constexpr int def_id{0};
    static constexpr const char * def_name{"Unnnamed Animal"};
    static constexpr bool def_isHungry{false};
    static constexpr int def_age{0};
protected:
    int id;
    std::string name;
    bool isHungry;
    int age;
public:
    Animal(int id = def_id, std::string name = def_name, bool isHungry = def_isHungry, int age = def_age);
    virtual std::string blink();
    virtual std::string eat();
    virtual std::string info();
    int getId();
    void setId(const int);
    std::string getName();
    void setName(const std::string name);
};

#endif
