#include "Items.h"
#include "Util.h"
#include "Layout.h"
#include "Items.cpp"
#include<iostream>
#include<sstream>

Animal read_animal(){
    std::cout<<"Reading Animal:"<<std::endl;
    std::string name;
    std::cout<<"Enter the name of the animal: ";
    std::cin>>std::ws;
    getline(std::cin, name);
    std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No) R: ";

    char option = '\0';
    std::cin>>option;
    option = toupper(option);

    while (option != 'Y' && option != 'N'){
        std::cout<<"Enter a valid option, please!"<<std::endl;
        std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";
        std::cin>>option;
        option = toupper(option);
    }

    bool is_Hungry = (option == 'Y' ? true : false);

    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    while(age<0){
        std::cout<<"Enter a valid age, please!"<<std::endl;
        std::cout<<"Enter the age of "<<name<<": ";
        std::cin>>age;
    }

    Animal animal{0, name, is_Hungry, age};
    //std::cin>>std::ws;

    return animal;
}

Bird read_bird(){
    std::cout<<"Reading Bird:"<<std::endl;
    std::string name;
    std::cout<<"Enter the name of the bird: ";
    std::cin>>std::ws;
    getline(std::cin, name);
    std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No) R: ";

    char option = '\0';
    std::cin>>option;
    option = toupper(option);

    while (option != 'Y' && option != 'N'){
        std::cout<<"Enter a valid option, please!"<<std::endl;
        std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No) R: ";
        std::cin>>option;
        option = toupper(option);
    }

    bool is_Hungry = (option == 'Y' ? true : false);

    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    while(age<0){
        std::cout<<"Enter a valid age, please!"<<std::endl;
        std::cout<<"Enter the age of "<<name<<": ";
        std::cin>>age;
    }

    std::cout<<"Enter the wings of: ";
    int wings{};
    std::cin>>wings;

    while(wings<0){
        std::cout<<"Enter a valid wings, please!"<<std::endl;
        std::cout<<"Enter the wings of: ";
        std::cin>>wings;
    }

    Bird bird{0, name, is_Hungry, age, wings};
    //std::cin>>std::ws;

    return bird;
}

FlyingBird read_flying_bird(){
    std::cout<<"Reading FlyingBird:"<<std::endl;
    std::string name;
    std::cout<<"Enter the name of the FlyingBird: ";
    std::cin>>std::ws;
    getline(std::cin, name);
    std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No) R: ";

    char option = '\0';
    std::cin>>option;
    option = toupper(option);

    while (option != 'Y' && option != 'N'){
        std::cout<<"Enter a valid option, please!"<<std::endl;
        std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No) R: ";
        std::cin>>option;
        option = toupper(option);
    }

    bool is_Hungry = (option == 'Y' ? true : false);

    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    while(age<0){
        std::cout<<"Enter a valid age, please!"<<std::endl;
        std::cout<<"Enter the age of "<<name<<": ";
        std::cin>>age;
    }

    std::cout<<"Enter the wings of: ";
    int wings{};
    std::cin>>wings;

    while(wings<0){
        std::cout<<"Enter a valid wings, please!"<<std::endl;
        std::cout<<"Enter the wings of: ";
        std::cin>>wings;
    }

    std::cout<<"Enter the range (0-10): ";
    int range{};
    std::cin>>range;

    while(range<0 || range>10){
        std::cout<<"Enter a valid range, please!"<<std::endl;
        std::cout<<"Enter the range (0-10): ";
        std::cin>>range;
    }

    FlyingBird flyingBird {0, name, is_Hungry, age, wings, range};
    //std::cin>>std::ws;

    return flyingBird;
}

NotFlyingBird read_not_flying_bird(){

    std::cout<<"Reading NotFlyingBird:"<<std::endl;
    std::string name;
    std::cout<<"Enter the name of the NotFlyingBird: ";
    std::cin>>std::ws;
    getline(std::cin, name);
    std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No) R: ";

    char option = '\0';
    std::cin>>option;
    option = toupper(option);

    while (option != 'Y' && option != 'N'){
        std::cout<<"Enter a valid option, please!"<<std::endl;
        std::cout<<"Is "<<name<<" hungry? (Y-Yes; N-No)";
        std::cin>>option;
        option = toupper(option);
    }

    bool is_Hungry = (option == 'Y' ? true : false);

    std::cout<<"Enter the age of "<<name<<": ";
    int age{};
    std::cin>>age;

    while(age<0){
        std::cout<<"Enter a valid age, please!"<<std::endl;
        std::cout<<"Enter the age of "<<name<<": ";
        std::cin>>age;
    }

    std::cout<<"Enter the wings of: ";
    int wings{};
    std::cin>>wings;

    while(wings<0){
        std::cout<<"Enter a valid wings, please!"<<std::endl;
        std::cout<<"Enter the wings of: ";
        std::cin>>wings;
    }

    std::cout<<"Enter the usefulness: ";
    int usefulness{};
    std::cin>>usefulness;

    NotFlyingBird notFlyingBird {0, name, is_Hungry, age, wings, usefulness};
    //std::cin>>std::ws;

    return notFlyingBird;
}

void insert_animal(Container& container){
    Animal animal = read_animal();
    append(container.items_animal, animal, container);
    std::cout<<"Animal "<<animal.getName()<<" inserted."<<std::endl;
}

void insert_bird(Container& container){
    Bird bird = read_bird();
    append(container.items_bird, bird, container);
    std::cout<<"Bird "<<bird.getName()<<" inserted."<<std::endl;
}

void insert_flying_bird(Container& container){
    FlyingBird flying_bird = read_flying_bird();
    append(container.items_flying_bird, flying_bird, container);
    std::cout<<"FlyingBird "<<flying_bird.getName()<<" inserted."<<std::endl;
}

void insert_not_flying_bird(Container& container){
    NotFlyingBird not_flying_bird = read_not_flying_bird();
    append(container.items_not_flying_bird, not_flying_bird, container);
    std::cout<<"NotFlyingBird "<<not_flying_bird.getName()<<" inserted."<<std::endl;
}

void update_animal(Container &container){
    std::cout<<"Updating Animal: "<<std::endl;
    int id = container.items_animal.at(container.get_index_selected()).getId();

    if(exist(container.items_animal, id)){
        Animal update_animal = read_animal();
        update_animal.setId(id);
        int index = getIndex(container.items_animal, id);
        container.items_animal[index] = update_animal;
        std::cout<<"Animal with Id "<<id<<" updated."<<std::endl;
    } else{
        std::cout<<"Animal with Id "<<id<<" not updated."<<std::endl;
    }
}

void update_bird(Container& container){
    std::cout<<"Updating Bird: "<<std::endl;
    int id = container.items_bird.at(container.get_index_selected()).getId();

    if(exist(container.items_flying_bird, id)){
        Bird update_bird = read_bird();
        update_bird.setId(id);

        int index = getIndex(container.items_bird, id);
        container.items_bird[index] =  update_bird;
        std::cout<<"Bird with Id "<<id<<" updated."<<std::endl;
    } else{
        std::cout<<"Bird with Id "<<id<<" not updated."<<std::endl;
    }
}

void update_flying_bird(Container& container){
    std::cout<<"Updating FlyingBird: "<<std::endl;
    int id = container.items_flying_bird.at(container.get_index_selected()).getId();

    if(exist(container.items_flying_bird, id)){
        FlyingBird update_flying_bird = read_flying_bird();
        update_flying_bird.setId(id);

        int index = getIndex(container.items_flying_bird, id);
        container.items_flying_bird[index] = update_flying_bird;
        std::cout<<"FlyingBird with Id "<<id<<" updated."<<std::endl;
    } else{
        std::cout<<"FlyingBird with Id "<<id<<" not updated."<<std::endl;
    }
}

void update_not_flying_bird(Container& container){
    std::cout<<"Updating NotFlyingBird: "<<std::endl;
    int id = container.items_not_flying_bird.at(container.get_index_selected()).getId();

    if(exist(container.items_not_flying_bird, id)){
        NotFlyingBird update_not_flying_bird = read_not_flying_bird();
        update_not_flying_bird.setId(id);

        int index = getIndex(container.items_not_flying_bird, id);
        container.items_not_flying_bird[index] = update_not_flying_bird;
        std::cout<<"NotFlyingBird with Id "<<id<<" updated."<<std::endl;
    } else{
        std::cout<<"NotFlyingBird with Id "<<id<<" not updated."<<std::endl;
    }
}


void list_animals(Container& container){
    display(container.items_animal, container);

    if(container.get_number_of_elements() == 0){
        showWelcomeMenu(container);
    }
}

void play_animal_types(Container &container){
    int index = container.get_index_selected();
    switch (container.type_of_animal)
    {
        case Types::Animal: display_select_animal(getItem(container.items_animal, index), container); break;
        case Types::Bird: display_select_bird(getItem(container.items_bird, index), container); break;
        case Types::FlyingBird: display_select_flying_bird(getItem(container.items_flying_bird, index), container); break;
        case Types::NotFlyingBird: display_select_not_flying_bird(getItem(container.items_not_flying_bird, index), container); break;
        default: break;
    }    
}

void display_actions_types(Container &container, int index){

    switch (container.type_of_animal)
    {
        case Types::Animal: display_select_animal(getItem(container.items_animal, index), container); break;
        case Types::Bird: display_select_bird(getItem(container.items_bird, index), container); break;
        case Types::FlyingBird: display_select_flying_bird(getItem(container.items_flying_bird, index), container); break;
        case Types::NotFlyingBird: display_select_not_flying_bird(getItem(container.items_not_flying_bird, index), container); break;
        default: break;
    }
}

bool is_number(std::string str){
    for (char c : str){
        if(c<'0' || c>'9'){
            return false;
        }
    }
    return true;
}

void list_birds(Container& container){
    display(container.items_bird, container);
}

void list_flying_birds(Container& container){
    display(container.items_flying_bird, container);
}

void list_not_flying_birds(Container& container){
    display(container.items_not_flying_bird, container);
}

void delete_animal(Container& container){
    std::cout<<"Delete Animal: "<<std::endl;
    int id = container.items_animal.at(container.get_index_selected()).getId();

    if(exist(container.items_animal, id)){
        remove(container.items_animal, id);
        std::cout<<"Animal with Id "<<id<<" deleted."<<std::endl;
    }

}

void delete_bird(Container& container){
    std::cout<<"Delete Bird: "<<std::endl;    
    int id = container.items_bird.at(container.get_index_selected()).getId();


    if(exist(container.items_bird, id)){
        remove(container.items_bird, id);
        std::cout<<"Animal with Id "<<id<<" deleted."<<std::endl;
    }
}

void delete_flying_bird(Container& container){
    std::cout<<"Delete FlyingBird: "<<std::endl;
    int id = container.items_flying_bird.at(container.get_index_selected()).getId();

    if(exist(container.items_flying_bird, id)){
        remove(container.items_flying_bird, id);
        std::cout<<"FlyingBird with Id "<<id<<" deleted."<<std::endl;
    } else{
        std::cout<<"FlyingBird with Id "<<id<<" does not exist."<<std::endl;
    }
}

void delete_not_flying_bird(Container& container){
    std::cout<<"Delete NotFlyingBird: "<<std::endl;    
    int id = container.items_not_flying_bird.at(container.get_index_selected()).getId();

    if(exist(container.items_not_flying_bird, id)){
        remove(container.items_not_flying_bird, id);
        std::cout<<"NotFlyingBird with Id "<<id<<" deleted."<<std::endl;
    } else{
        std::cout<<"NotFlyingBird with Id "<<id<<" does not exist."<<std::endl;
    }
}

void display_select_animal(Animal animal, Container &container){
    std::cout<<"What do you want to do with "<<animal.getName()<<"?"<<std::endl;
    std::cout<<"\n"
        "B-Blink\n"
        "E-Eat\n"
        "I-Info\n"
        "X-Back\n"
        "Action: ";

    char action = '\0';
    std::cin>>action;
    action = toupper(action);

    bool is_okay{true};
    switch(action){
        case 'B': std::cout<<animal.blink()<<std::endl; break;
        case 'E': std::cout<<animal.eat()<<std::endl; break;
        case 'I': std::cout<<animal.info()<<std::endl; break;
        case 'X': askCrudOperation(container); break;
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
    }

    //std::cin>>std::ws;

    if(!is_okay){
        display_select_animal(animal, container);
    }
}

void display_select_bird(Bird bird, Container &container){
    std::cout<<"What do you want to do with "<<bird.getName()<<"?"<<std::endl;
    std::cout<<"\n"
        "B-Blink\n"
        "E-Eat\n"
        "I-Info\n"
        "S-Sing\n"
        "X-Back\n"
        "Action: ";

    char action = '\0';
    std::cin>>action;
    action = toupper(action);

    bool is_okay{true};
    switch(action){
        case 'B': std::cout<<bird.blink()<<std::endl; break;
        case 'E': std::cout<<bird.eat()<<std::endl; break;
        case 'I': std::cout<<bird.info()<<std::endl; break;
        case 'S': std::cout<<bird.sing()<<std::endl; break;
        case 'X': askCrudOperation(container); break;
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
    }

    //std::cin>>std::ws;

    if(!is_okay){
        display_select_animal(bird, container);
    }
}

void display_select_flying_bird(FlyingBird flying_bird, Container &container){

    std::cout<<"What do you want to do with "<<flying_bird.getName()<<"?"<<std::endl;
    std::cout<<"\n"
        "B-Blink\n"
        "E-Eat\n"
        "I-Info\n"
        "S-Sing\n"
        "F-Fly\n"
        "X-Back\n"
        "Action: ";

    char action = '\0';
    std::cin>>action;
    action = toupper(action);

    bool is_okay{true};
    switch(action){
        case 'B': std::cout<<flying_bird.blink()<<std::endl; break;
        case 'E': std::cout<<flying_bird.eat()<<std::endl; break;
        case 'I': std::cout<<flying_bird.info()<<std::endl; break;
        case 'S': std::cout<<flying_bird.sing()<<std::endl; break;
        case 'F': std::cout<<flying_bird.fly()<<std::endl; break;
        case 'X': askCrudOperation(container); break;
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
    }

    //std::cin>>std::ws;

    if(!is_okay){
        display_select_animal(flying_bird, container);
    }
}

void display_select_not_flying_bird(NotFlyingBird not_flying_bird, Container &container){
    std::cout<<"What do you want to do with "<<not_flying_bird.getName()<<"?"<<std::endl;
    std::cout<<"\n"
        "B-Blink\n"
        "E-Eat\n"
        "I-Info\n"
        "S-Sing\n"
        "X-Back\n"
        "Action: ";

    char action = '\0';
    std::cin>>action;
    action = toupper(action);

    bool is_okay{true};
    switch(action){
        case 'B': std::cout<<not_flying_bird.blink()<<std::endl; break;
        case 'E': std::cout<<not_flying_bird.eat()<<std::endl; break;
        case 'I': std::cout<<not_flying_bird.info()<<std::endl; break;
        case 'S': std::cout<<not_flying_bird.sing()<<std::endl; break;
        case 'X': askCrudOperation(container); break;
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
    }

    //std::cin>>std::ws;

    if(!is_okay){
        display_select_animal(not_flying_bird, container);
    }
}
