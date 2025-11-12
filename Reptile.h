#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include<string>
class Reptile:public Animal{
private:
     bool isVenomous;
 public:
     Reptile();
     Reptile(string name,int age,bool isHungry,bool isVenomous);
     ~Reptile();
     bool getVenomous();
};









#endif
