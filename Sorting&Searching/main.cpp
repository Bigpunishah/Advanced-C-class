#include <iostream>
using namespace std;

void bubbleSort(int arr[], int arr_size) {
    for (int i = 0; i < arr_size - 1; i++) {
        for (int j = 0; j < arr_size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int sequentialSearch(int val, int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] == val) {
            return i; // Found the value at position i
        }
    }
    return -1; // Value not found in the list
}

int main() {
    const int size = 10;
    int arr[size];

    // Input 10 digits
    cout << "Enter 10 digits:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Sort the list
    bubbleSort(arr, size);

    // Prompt user for a digit to search
    int search_digit;
    cout << "Enter a digit to search: ";
    cin >> search_digit;

    // Perform sequential search
    int position = sequentialSearch(search_digit, arr, size);

    // Output the result
    if (position != -1) {
        cout << search_digit << " is found at position " << position << endl;
    } else {
        cout << search_digit << " is not in the list" << endl;
    }

    return 0;
}
