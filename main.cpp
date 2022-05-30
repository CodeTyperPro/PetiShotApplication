#include<iostream>
#include "Util.h"

using namespace std;

int main(){
    // Our container in which include all the vectors types (Animal, Bird, FlyingBird and NotFlyingBird)
    // And also the type of animals that will be select/chosen later on
    Container container{};
    // Show the welcome menu
    showWelcomeMenu(container);
    return 0;
}
