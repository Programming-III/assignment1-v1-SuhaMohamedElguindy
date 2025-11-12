#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include<string>
class Mammal:public Animal{
private:
    string furColor;
public:
    Mammal();
    Mammal(string name,int age,bool isHungry,string furColor);
    ~Mammal();
    string getColor();
    void setColor(string furColor);
};






#endif
