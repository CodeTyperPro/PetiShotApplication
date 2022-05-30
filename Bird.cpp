#include "Bird.h"

Bird::Bird(int id, std::string name, bool isHungry, int age, int wings)
    : Animal{id, name, isHungry, age}, wings{wings} {
}

std::string Bird::sing(){
    std::string ms = name + " is singing.";
    return ms;
}

std::ostream &operator<<(std::ostream &os, const Bird &bird){
    os<<"[Bird => {id: "<<bird.id<<"}, name: "<<bird.name<<", isHungry: "<<(bird.isHungry ? "Yes" : "No")<<", age: "<<bird.age<<", wings: "<<bird.wings<<"}]";
    return os;
}

std::string Bird::info(){
    std::string ms = name + " is a Bird type Animal, has " + std::to_string(wings) + ", currently" + (!isHungry ? " not" : "") + " hungry and " + std::to_string(age) + " years old";
    return ms;
}

std::string Bird::blink(){
    std::string ms = name + " is blinking.";
    return ms;
}


std::string Bird::eat(){
    std::string ms = name + " is eating.";
    return ms;
}
