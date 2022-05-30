#include "NotFlyingBird.h"

NotFlyingBird::NotFlyingBird(int id, std::string name, bool isHungry, int age, int wings, int usefulness)
    : Bird{id, name, isHungry, age, wings}, usefulness{usefulness} {
}


std::string NotFlyingBird::info(){
    std::string ms = name + " is a NotFlyingBird type Animal, currently" + (!isHungry ? " not" : "") + " hungry and " + std::to_string(age) + " years old";
    return ms;
}


std::string NotFlyingBird::blink(){
    std::string ms = name + " is blinking.";
    return ms;
}

std::string NotFlyingBird::eat(){
    std::string ms = name + " is eating.";
    return ms;
}

std::string NotFlyingBird::sing(){
    std::string ms = name + " is singing.";
    return ms;
}

std::ostream &operator<<(std::ostream &os, const NotFlyingBird &not_flying_bird){
    os<<"[NotFlyingBird => {id: "<<not_flying_bird.id<<"}, name: "<<not_flying_bird.name<<", isHungry: "<<(not_flying_bird.isHungry ? "Yes" : "No")<<", age: "<<not_flying_bird.age<<", wings: "<<not_flying_bird.wings<<", arange"<<not_flying_bird.usefulness<<"}]";
    return os;
}
