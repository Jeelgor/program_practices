#include<iostream>
using namespace std;
int main() {
    int size  = 4;
    int number  = 10;

    for (int i = size; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << number-- << " ";
        }
        cout << endl;
    }


} 