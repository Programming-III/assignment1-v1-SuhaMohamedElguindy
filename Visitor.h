#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor{
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor();
    Visitor(string visitorName,int ticketsBought);
    ~Visitor();
    string getVisitorName();
    int getTicketsBought();
    void displayInfo();
};







#endif
