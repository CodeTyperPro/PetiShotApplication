#ifndef _BIRD_H_
#define _BIRD_H_
#include "Animal.h"

class Bird : public Animal{
    friend std::ostream &operator<<(std::ostream &os, const Bird &bird);
private:
    static constexpr int def_wings{0};
protected:
    int wings;
public:
    Bird(int id, std::string name, bool isHungry, int age, int wings = def_wings);
    virtual std::string  sing();
    virtual std::string blink();
    virtual std::string eat();
    virtual std::string info();
};

#endif
