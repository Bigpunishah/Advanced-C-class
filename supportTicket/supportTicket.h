#ifndef SUPPORTTICKET_H
#define SUPPORTTICKET_H

#include <iostream>
#include <list>

using namespace std;

class Ticket
{
private:
    long id;
    int room_num;
    int prioritySelection[5] = {1, 2, 3, 4, 5};
    int priority;
    string location;
    string building;
    string description;


public:
    Ticket();
    Ticket(long, int, int, string, string, string);
    void display() const;

    int getId(){
        return id;
    }



    


    
};

class SupportSystem {
private:
    list<Ticket> tickets;
public:
    void addTicket(const Ticket& ticket);

    void completeTicket(long id);

    void listTickets() const;
};

#endif