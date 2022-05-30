#include "Util.h"

// Perform edit, delete and play operations
void askCrudOperation(Container& container){

    std::cout<<"QUESTION:"<<std::endl;
    std::cout<<"Would you like to edit, delete or play with "<<container.get_name_selected()<<"? Press N to go back. (E-Edit, D-Delete, P-Play, N-No)"<<std::endl;
    std::cout<<"Option: ";

    char option;
    std::cin>>option;
    option = toupper(option); // Always convert the option entered to upper case because of misstypes
    
    bool is_okay = true;
    switch(option){
        case 'E': update_animal_type(container); break;
        case 'D': delete_animal_type(container); list_all_animals_type(container); break;
        case 'P': play_animal_types(container); break;
        case 'N': list_all_animals_type(container); break;
        default:
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
            break;
    }

    if(!is_okay){
        askCrudOperation(container); // Ask again the type of animal. The one entered is not valid
    }

}

void showSelect(Container &container){
    askTypeAnimal(container);
    list_all_animals_type(container);   
}

void showCreate(Container &container){
    askTypeAnimal(container);
    add_new_animal_type(container);
}

// Show the welcome menu
void showWelcomeMenu(Container &container){

    std::cout<<"\n::: MENU :::";
    std::cout<<"\n\n-- Welcome to the Pet Shop application! --";
    std::cout<<"\n\nPlease select a menu point:";
    std::cout<<"\n"
            "C) Create new Animal\n"
            "S) Select animal type\n"
            "E) Exit\n"
            "Operation: ";

    char option;
    std::cin>>option;
    option = toupper(option);
    switch(option){
        case 'C': showCreate(container); break;
        case 'S': showSelect(container); break;
        case 'E': exit_(); break;
        default:
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            break;
    }

    showWelcomeMenu(container); // Call the main menu
}

// Ask to user the type of animal he wants to work with
void askTypeAnimal(Container& container){

    std::cout<<"QUESTION:"<<std::endl;
    std::cout<<"What type of Animal do you want to create/select? (A-Animal, B-Bird, F-Flying Bird, N-Not Flying Bird)"<<std::endl;
    std::cout<<"Option: ";

    char option;
    std::cin>>option;
    option = toupper(option); // Always convert the option entered to upper case because of misstypes

    bool is_okay = true;
    switch (option)
    {
        case 'A': container.type_of_animal = Types::Animal; break;
        case 'B': container.type_of_animal = Types::Bird; break;
        case 'F': container.type_of_animal = Types::FlyingBird; break;
        case 'N': container.type_of_animal = Types::NotFlyingBird; break;
        default:
            std::cout<<"Invalid option. Choose a valid option, please!"<<std::endl;
            is_okay = false;
            break;
    }

    if(!is_okay){
        askTypeAnimal(container); // Ask again the type of animal. The one entered is not valid
    }
}

// Exit the program entirely
void exit_(){
    exit(0);
}

// Call the layout to insert a new animal
void add_new_animal_type(Container& container){
    switch (container.type_of_animal)
    {
        case Types::Animal: insert_animal(container); break;
        case Types::Bird: insert_bird(container); break;
        case Types::FlyingBird: insert_flying_bird(container); break;
        case Types::NotFlyingBird: insert_not_flying_bird(container); break;
        default: break;
    }
}

// List all the animal of any type
void list_all_animals_type(Container& container){
    switch (container.type_of_animal)
    {
        case Types::Animal: list_animals(container); break;
        case Types::Bird: list_birds(container); break;
        case Types::FlyingBird: list_flying_birds(container); break;
        case Types::NotFlyingBird: list_not_flying_birds(container); break;
        default: break;
    }

    
    std::vector<std::string> types = {"Animal", "Bird", "FlyingBird", "NotFLying"};
    std::cout<<"List "<< types[(int) container.type_of_animal]<<": "<<std::endl;
    std::cout<<"Would you like to select a/an "<<types[(int) container.type_of_animal]<<"? (Y/N) R: ";
    
    char option;
    std::cin>>option;
    option = toupper(option);
    
    while(option != 'Y' && option != 'N'){
        std::cout<<"Invalid option. Please, enter a valid choice!";
        std::cout<<"Would you like to select a/an "<<types[(int) container.type_of_animal]<<"? (Y/N) R: ";
        std::cin>>option;
        option = toupper(option);
    }

    if(option == 'Y'){
        // Execute the selection of an animal to print the equivalent action it can do :)
        std::cout<<"Enter the index of the element you wish to select you wish to select an animal or [S] to skip, please: ";
        std::cin>>std::ws;
        std::string option;
        std::cin>>option;

        if(toupper(option[0]) != 'S'){

            while(!is_number(option)){
                std::cout<<"Invalid index. Please, enter a valid index: ";
                std::cin>>option;
            }

            int index{};
            std::stringstream os(option);
            os>>index;

            // Display the action that the given animal is able to do
            //display_actions_types(container, index);
            container.select_index(index);
            askCrudOperation(container);
        }
    }

    //showWelcomeMenu(container);
}

// Update any animal
void update_animal_type(Container& container){
    switch (container.type_of_animal)
    {
        case Types::Animal: update_animal(container); break;
        case Types::Bird: update_bird(container); break;
        case Types::FlyingBird: update_flying_bird(container); break;
        case Types::NotFlyingBird: update_not_flying_bird(container); break;
        default: break;
    }
    list_all_animals_type(container);
}

// Delete any animal
void delete_animal_type(Container &container){
    switch (container.type_of_animal)
    {
        case Types::Animal: delete_animal(container); break;
        case Types::Bird: delete_bird(container); break;
        case Types::FlyingBird: delete_flying_bird(container); break;
        case Types::NotFlyingBird: delete_not_flying_bird(container); break;
        default: break;
    }
}
