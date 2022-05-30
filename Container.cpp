#include "Container.h"

// Insertion of default values
Container::Container() : last_id{1}, index_selected{0}{

    // Set default or initals values to our vectors/containers
    int len = 5;
    for (int i = 0; i<len; i++){
        items_animal.push_back(Animal{i, "Alfredo Martins", true, i});
    } 

    for (int i = 0; i<len; i++){
        items_bird.push_back(Bird{i, "Hayat Chouhib", false, i+1, 8});
    } 

    for (int i = 0; i<len; i++){
        items_flying_bird.push_back(FlyingBird{i, "Csonka Láslo", false, i+1, 8, 3});
    } 

    for (int i = 0; i<len; i++){
        items_not_flying_bird.push_back(NotFlyingBird{i, "Kinga Cseko", false, i+1, 8, 43});
    } 
}

// Return the selected index
int Container::get_index_selected(){
    return this->index_selected;
}

// Select the index
void Container::select_index(int index){
    this->index_selected = index;
}

// Return the name of the selected animal based on its type
std::string Container::get_name_selected(){
    std::string name{};
    switch (type_of_animal)
    {
        case Types::Animal: name = items_animal.at(index_selected).getName(); break;
        case Types::Bird: name = items_bird.at(index_selected).getName(); break;
        case Types::FlyingBird: name = items_flying_bird.at(index_selected).getName(); break;
        case Types::NotFlyingBird: name = items_not_flying_bird.at(index_selected).getName(); break;
        default: break;
    }
    return name;
}

// Return the number of elements existing in the array according to its type selected
int Container::get_number_of_elements(){
    int array_size{};
    switch (type_of_animal)
    {
        case Types::Animal: array_size = items_animal.size(); break;
        case Types::Bird: array_size = items_bird.size(); break;
        case Types::FlyingBird: array_size = items_flying_bird.size(); break;
        case Types::NotFlyingBird: array_size = items_not_flying_bird.size(); break;
        default: break;
    }
    return array_size;
}