#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100; // maximum size of the array
    int arr[maxSize]; // declare an array
    int n = 0; // current size of the array

    // Insert at the beginning
    int start;
    cout << "Enter the element to insert at the beginning: ";
    cin >> start;
    if (n < maxSize) {
        for (int i = n; i > 0; i--) {
            arr[i] = arr[i - 1]; // Shift elements to the right
        }
        arr[0] = start; // Insert element at the beginning
        n++; // Increase the size of the array
    } else {
        cout << "Array is full, cannot insert at the beginning." << endl;
    }

    // Insert at the end
    int end;
    cout << "Enter the element to insert at the end: ";
    cin >> end;
    if (n < maxSize) {
        arr[n] = end; // Insert element at the end
        n++; // Increase the size of the array
    } else {
        cout << "Array is full, cannot insert at the end." << endl;
    }

    // Print the array
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
