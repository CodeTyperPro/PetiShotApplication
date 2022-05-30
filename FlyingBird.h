#ifndef _FLYING_BIRD_H_
#define _FLYING_BIRD_H_
#include "Bird.h"

class FlyingBird : public Bird{
    friend std::ostream &operator<<(std::ostream &os, const FlyingBird &flying_bird);
private:
    static constexpr int def_range{0};
protected:
    int range;
public:
    FlyingBird(int id, std::string name, bool isHungry, int age, int wings, int range = def_range);
    std::string fly();
    virtual std::string blink();
    virtual std::string eat();
    virtual std::string info();
};

#endif
