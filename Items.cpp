#include "Items.h"

// Templates definitions to perform complete CRUD operations of all entities
// This templates functions works for all the classes. The C variable is replaced by the given class passed as paramenter

template<class C>
void append(std::vector<C> &items, C item, Container &container){
    item.setId(container.last_id); // Set the last id based on number inserted ignoring if other were or not removed
    items.push_back(item); // Append to the vector which is inside of our container
    container.last_id++; // Incremente the id by one step
}

template<typename C>
void remove(std::vector<C>& items, int id){
    int index = getIndex(items, id); // Find the index of the item with respect id in the vector.
    items.erase(items.begin() + index); // Erase it from the vector.
}

template<typename C>
void insert(std::vector<C> &items, int index, C item){
    items.insert(getItem(items, index), item); // Insert the element in an existing position. The id does not change.
}

// Check if whether the given id is present in our vector
template<typename C>
bool exist(std::vector<C> &items, const int id){
    for (C& i : items){
        if(i.getId() == id){ // If the element element match with that id, means that exist, so, return true.
            return true;
        }
    }
    return false;
}

// Return the element model(animal) at that index of the vector
template<typename C>
C getItem(std::vector<C>& items, const int index){
    return items.at(index);
}

// Check if whether the given id is present in our vector, return and index>=0 if it's okay, or -1 if not
template<typename C>
int getIndex(std::vector<C>& items, const int id){
    for (int i = 0; i<items.size(); i++){
        if(items.at(i).getId() == id){
            return i;
        }
    }
    return -1;
}


// Display all the elements stored in out vector
template<typename C>
void display(std::vector<C>& items, Container& container){
    // It does not matter the class type, It is going to print exactly the list based on the select type of animal/class
    std::vector<std::string> types = {"Animal", "Bird", "FlyingBird", "NotFLying"};
    std::cout<<"List "<< types[(int) container.type_of_animal]<<": "<<std::endl;
    int index = 0;
    for (const C& x : items){
        std::cout<<"Index: "<<index++<<" | ";
        std::cout<<x<<std::endl;
    }
}

// Return the lenght of the vector
template<typename C>
int lenght(const std::vector<C>& items){
    return items.size();
}
