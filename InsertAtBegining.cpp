#include <iostream>
using namespace std;

int main()
{
    // Array with initial values
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    cout << "Print the Array before adding value" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert at the beginning
    cout << "Enter value to add at the beginning: ";
    int newValueBegin;
    cin >> newValueBegin;
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[0] = newValueBegin; // Insert value at the beginning
    size++;                 // Increase the size of the array

    // Insert at the end
    cout << "Enter value to add at the end: ";
    int newValueEnd;
    cin >> newValueEnd;
    arr[size - 1] = newValueEnd; // Insert value at the end
    size++;                      // Increase the size of the array

    cout << "Print the Array after adding value" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
