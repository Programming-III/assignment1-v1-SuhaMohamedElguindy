#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
Enclosure* A=new Enclosure(&animal,10,0);
Animal mammal=new Mammal("Lion",5,1);
Animal bird=new Bird("Parrot",2,0);
Animal reptile=new Reptile("Snake",3,1,1);
Visitor v=new Visitor("Sarah Ali",3);
cout<<"Enclosure 1 Animals:"<<endl;
cout<<Animals->displayAnimals()<<endl;
cout<<"VisitorInfo:"<<endl;
cout<<v->displayInfo()<<endl;
    
    return 0;
}
