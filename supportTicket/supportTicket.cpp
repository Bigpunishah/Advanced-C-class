#include <list>
#include <iostream>
#include "supportTicket.h"

using namespace std;

// Default constructor for Ticket class
Ticket::Ticket() {
    id = 0;
    room_num = 0;
    priority = 0;
    location = "";
    building = "";
    description = "";
}

// Parameterized constructor for Ticket class
Ticket::Ticket(long _id, int _room_num, int _priority, string _location, string _building, string _description) {
    id = _id;
    room_num = _room_num;
    priority = prioritySelection[_priority]; // Setting priority based on the priority selection array
    location = _location;
    building = _building;
    description = _description;
}

// Method to display ticket details
void Ticket::display() const {
    cout << "ID: " << id << ", Room Number: " << room_num << ", Priority: " << priority << ", Location: " << location << ", Building: " << building << ", Description: " << description << endl;
}

// Method to add a ticket to the list of tickets
void SupportSystem::addTicket(const Ticket& ticket) {
    tickets.push_back(ticket);
}

// Method to complete a ticket with a given ID
void SupportSystem::completeTicket(long id) {
    // Iterate through the list of tickets
    for (auto it = tickets.begin(); it != tickets.end(); ++it) {
        // If ticket with the specified ID is found
        if (it->getId() == id) {
            // Remove the ticket from the list
            tickets.erase(it);
            // Inform user that the ticket is completed and removed
            cout << "Ticket with ID " << id << " completed and removed from the list." << endl;
            return;
        }
    }
    // If ticket with the specified ID is not found
    cout << "Ticket with ID " << id << " not found." << endl;
}


void SupportSystem::listTickets() const {
    cout << "Active Tickets:" << endl;
    // Iterate throuhg the list of tickets & display them
    for (const auto& ticket : tickets) {
        ticket.display();
    }
}
