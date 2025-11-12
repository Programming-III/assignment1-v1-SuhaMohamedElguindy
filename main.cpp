#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


/////Animal
Animal::Animal(){

}
Animal::Animal(string name,int age,bool isHungry){
this->name=name;
this->age=age;
this->isHungry=isHungry;
}
Animal::~Animal(){

}
string Animal::getName(){
return name;
}
void Animal::setName(string name){
this->name=name;
}
int Animal::getAge(){
return age;
}
void Animal::setAge(int age){
this->age=age;
}
bool Animal::getIsHungry(){
return isHungry;
}
void Animal::feed(){
if(getIsHungry()){
cout<<"Hungry";
}else{
cout<<"Not Hungry";
}
}
void Animal::display(){
cout<<getName()<<"(Age:"<<getAge()<<","<<getIsHungry()<<")"<<endl;
}

////Bird
Bird::Bird(){

}
Bird::Bird(string name,int age,bool isHungry,float wingSpan){
this->wingSpan=wingSpan;
}
Bird::~Bird(){

}
float Bird::getSpan(){
return wingSpan;
}
void Bird::setSpan(float wingSpan){
this->wingSpan=wingSpan;
}
//////Enclosure
Enclosure::Enclosure(){}
Enclosure::Enclosure(Animal* animal,int capacity,int currentCount){
this->animal=nullptr;
this->capacity=capacity;
this->currentCount=currentCount;
}
Enclosure::~Enclosure(){
 delete[]animal;
}
int Enclosure:: getCapacity(){
return Capacity;
}
int Enclosure::getCurrentCount(){
return currentCount;
}
void::Enclosure addAnimal(Animal*a){
if(getCurrentCount()<getCapacity()){
animal[CurrentCount]=a;
currentCount++;
}else{
cout<<"Can not add an animal";
}
}
void Enclosure::displayAnimals(){
for(int i=0;i<getCurrentCount();i++){
cout<<animal[i]<<endl;
}
}

///Mammal
Mammal::Mammal(){}
Mammal::Mammal(string name,int age,bool isHungry,string furColor){
this->furColor=furColor;
}
Mammal::~Mammal(){}
string Mammal::getColor(){
return furColor;
}
void Mammal::setColor(string furColor){
this->furColor=furColor;
}
////Reptile
Reptile::Reptile(){}
Reptile::Reptile(string name,int age,bool isVenomous,bool isHungry){
this->isVenomous=isVenomous;
}
Reptile::~Reptile(){}
bool Reptile:: getVenomous(){
return isVenomous;
}

/////Visitor
Visitor::Visitor(){}
Visitor::Visitor(string visitorName,int ticketsBought){
this->visitorName=visitorName;
this->ticketsBought=ticketsBought;
}
Visitor::~Visitor(){}
string Visitor::getVisitorName(){
return visitorName;
}
int Visitor::getTicketsBought(){
return ticketsBought;
}
void Visitor::displayInfo(){
cout<<"Name: "<<getVisitorName()<<endl;
cout<<"Tickets Bought: "<<getTicketsBought()<<endl;
}

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
