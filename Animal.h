#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal{
   private:
       string name;
       int age;
       bool isHungry;
   public:
       Animal();
       Animal(string name,int age,bool isHungry);
       ~Animal();
       string getName();
       void setName(string name);
       int getAge();
       void setAge(int age);
       bool getIsHungry();
       void feed();
       void display();
};



#endif
