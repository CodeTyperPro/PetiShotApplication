#ifndef NOT_FLYING_BIRD_H
#define NOT_FLYING_BIRD_H
#include "Bird.h"

class NotFlyingBird : public Bird{
    friend std::ostream &operator<<(std::ostream &os, const NotFlyingBird &not_flying_bird);
private:
    static constexpr int def_usefulness{1};
protected:
    int usefulness;
public:
    NotFlyingBird(int id, std::string name, bool isHungry, int age, int wings, int usefulness = def_usefulness);
    virtual std::string blink();
    virtual std::string eat();
    virtual std::string info();
    virtual std::string sing();
};

#endif
