#include <iostream>

class myArray {
private:
    int* array;     // Pointer to the dynamically allocated array
    int arraySize;  // Size of the array
    int index;      // Starting index of the array

public:
    // Default constructor initializes the array to nullptr and size to 0
    myArray() : array(nullptr), arraySize(0), index(0) {}

    // Constructor to initialize array with a given size
    myArray(int size) : array(nullptr), arraySize(0), index(0) {
        if (size <= 0) {
            std::cerr << "Error: Size not valid." << std::endl;
        }
        else {
            array = new int[size];
            arraySize = size;
        }
    }

    // Constructor to initialize array with a given index and size
    myArray(int startIndex, int size) : array(nullptr), arraySize(0), index(startIndex) {
        if (size <= 0) {
            std::cerr << "Error: Size not valid." << std::endl;
        }
        else {
            array = new int[size];
            arraySize = size;
        }
    }

    // Destructor deallocates the dynamically allocated array
    ~myArray() {
        delete[] array;
    }

    // Getter function to access array element at a given index
    int& operator[](int accessIndex) {
        if (accessIndex < index || accessIndex >= index + arraySize) {
            std::cerr << "Error: Index out of bounds." << std::endl;
            throw std::out_of_range("Index out of bounds."); // Throwing an exception on error
        }
        return array[accessIndex - index];
    }
};

int main() {
    // Test cases
    myArray list(5);               // array starting from index 0 with size 5
    myArray myList(2, 13);         // array starting from index 2 with size 13
    myArray yourList(-5, 9);       // array starting from index -5 with size 9

    // Accessing elements of the arrays
     list[0] = 10;
     list[4] = 20;

    myList[2] = 30;
    myList[12] = 40;

    yourList[-5] = 50;
    // yourList[8] = 60;

    // Displaying elements of the arrays
    std::cout << "list[0]: " << list[0] << std::endl;
    std::cout << "list[4]: " << list[4] << std::endl;

    std::cout << "myList[2]: " << myList[2] << std::endl;
    std::cout << "myList[12]: " << myList[12] << std::endl;

    std::cout << "yourList[-5]: " << yourList[-5] << std::endl;
    std::cout << "yourList[8]: " << yourList[8] << std::endl;

    return 0;
}
