#ifndef _LAYOUT_H_
#define _LAYOUT_H_
#include "Util.h"
#include "Container.h"

// -- INSERTION FUNCTIONS => Return an object based on its type
Animal read_animal();
Bird read_bird();
FlyingBird read_flying_bird();
NotFlyingBird read_not_flying_bird();

// -- DELETE OPERATION WITH LAYOUT
void update_animal(Container& container);
void update_bird(Container& container);
void update_flying_bird(Container& container);
void update_not_flying_bird(Container& container);

// -- INSERTION OPERATION WITH LAYOUT
void insert_animal(Container& container);
void insert_bird(Container& container);
void insert_flying_bird(Container& container);
void insert_not_flying_bird(Container& container);

// -- LIST OPERATION WITH LAYOUT
void list_animals(Container& container);
void list_birds(Container& container);
void list_flying_birds(Container& container);
void list_not_flying_birds(Container& container);

// -- DELETION OPERATION WITH LAYOUT
void delete_animal(Container &container);
void delete_bird(Container &container);
void delete_flying_bird(Container &container);
void delete_not_flying_bird(Container &container);

// Helper function that check whether the given string is valid or not
bool is_number(std::string str);

// -- DISPAY SELECTION (ACTION) OPERATION WITH LAYOUT
void display_actions_types(Container &container, int index);
void display_select_animal(const Animal animal, Container &container);
void display_select_bird(const Bird bird, Container &container);
void display_select_flying_bird(const FlyingBird flying_bird,Container &container);
void display_select_not_flying_bird(const NotFlyingBird not_flying_bird, Container &container);



#endif
