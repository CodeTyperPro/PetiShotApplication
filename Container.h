#ifndef _CONTAINER_H_
#define _CONTAINER_H_
#include<iostream>
#include<string.h>
#include<vector>
#include "Animal.h"
#include "Bird.h"
#include "FlyingBird.h"
#include "NotFlyingBird.h"
#include "Types.h"

class Container{
public:
    int last_id;
    int index_selected;
    Types type_of_animal;
    std::vector<Animal> items_animal;
    std::vector<Bird> items_bird;
    std::vector<FlyingBird> items_flying_bird;
    std::vector<NotFlyingBird> items_not_flying_bird;

    Container();
    int get_index_selected();
    void select_index(int index);
    std::string get_name_selected();
    int get_number_of_elements();
};

#endif
