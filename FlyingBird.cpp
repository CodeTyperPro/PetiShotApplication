#include "FlyingBird.h"

FlyingBird::FlyingBird(int id, std::string name, bool isHungry, int age, int wings, int range)
    : Bird{id, name, isHungry, age, wings}, range{range} {
}

std::string FlyingBird::fly(){
    std::string ms = name + " can fly up to " + std::to_string(wings) + "km-s.";
    return ms;
}

std::string FlyingBird::info(){
    std::string ms = name + " is a Flying type Animal, currently" + (!isHungry ? " not" : "") + " hungry and " + std::to_string(age) + " years old";
    return ms;
}

std::string FlyingBird::blink(){
    std::string ms = name + " is blinking.";
}


std::string FlyingBird::eat(){
    std::string ms = name + " is eating.";
    return ms;
}


std::ostream &operator<<(std::ostream &os, const FlyingBird &flying_bird){
    os<<"[FlyingBird => {id: "<<flying_bird.id<<"}, name: "<<flying_bird.name<<", isHungry: "<<(flying_bird.isHungry ? "Yes" : "No")<<", age: "<<flying_bird.age<<", wings: "<<flying_bird.wings<<", range"<<flying_bird.range<<"}]";
    return os;
}
