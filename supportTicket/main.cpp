#include <iostream>
#include "supportTicket.h"

using namespace std;

void printMenu() {
    cout << "\nMenu:\n";
    cout << "1. Add a support ticket\n";
    cout << "2. Complete a ticket\n";
    cout << "3. List active tickets\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    SupportSystem supportSystem;
    int choice;

    do {
        printMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                long id;
                int room_num, priority;
                string location, building, description;

                cout << "Enter ticket ID: ";
                cin >> id;
                cout << "Enter room number: ";
                cin >> room_num;
                cout << "Enter priority (1-5): ";
                cin >> priority;
                cout << "Enter location: ";
                cin.ignore();
                cin>>location;
                cout << "Enter building: ";
                cin>>building;
                cout << "Enter description: ";
                cin>>description;

                supportSystem.addTicket(Ticket(id, room_num, priority, location, building, description));
                break;
            }
            case 2: {
                long id;
                cout << "Enter the ID of the ticket to complete: ";
                cin >> id;
                supportSystem.completeTicket(id);
                break;
            }
            case 3:
                supportSystem.listTickets();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
