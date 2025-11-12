#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

#include<string>
class Enclosure{
private:
    Animal* animal;
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure(Animal* animal,int capacity,int currentCount);
    ~Enclosure();
    int getCapacity();
    int getCurrentCount();
    void addAnimal(Animal*a);
    void displayAnimals();
}; 








#endif
