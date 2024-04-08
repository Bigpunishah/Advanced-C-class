#include <iostream>
#include "Bowler.h"

// Insertion sort routine
void insertionSort(Bowler arr[], int n) {
    int i, j;
    Bowler key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int MAX_BOWLERS = 25;
    Bowler bowlers[MAX_BOWLERS];
    int numBowlers = 0;

    // Menu system
    int choice;
    do {
        std::cout << "\nMenu\n";
        std::cout << "1. Add Bowler\n";
        std::cout << "2. Print Bowler List (sorted by average score, highest to lowest)\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                if (numBowlers < MAX_BOWLERS) {
                    std::string firstName, lastName;
                    int scores[3];

                    std::cout << "Enter first name: ";
                    std::cin >> firstName;
                    std::cout << "Enter last name: ";
                    std::cin >> lastName;
                    std::cout << "Enter three bowling scores: ";
                    for (int i = 0; i < 3; ++i) {
                        std::cin >> scores[i];
                        // Validate scores
                        while (scores[i] < 0 || scores[i] > 300) {
                            std::cout << "Invalid score. Please enter a score between 0 and 300: ";
                            std::cin >> scores[i];
                        }
                    }

                    bowlers[numBowlers++] = Bowler(firstName, lastName, scores[0], scores[1], scores[2]);
                    insertionSort(bowlers, numBowlers); // Sort after each insertion
                } else {
                    std::cout << "Maximum number of bowlers reached.\n";
                }
                break;
            }
            case 2: {
                std::cout << "\nBowler List (sorted by average score, highest to lowest):\n";
                for (int i = 0; i < numBowlers; ++i) {
                    std::cout << bowlers[i].getFirstName() << " " << bowlers[i].getLastName() << ": " 
                              << bowlers[i].getAverageScore() << "\n";
                }
                break;
            }
            case 3:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
