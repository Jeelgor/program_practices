#include <iostream>
using namespace std;

void Printnum(int n) {
    if (n > 9) {
        return;
    }

    // Process
    cout << n<<endl;

    // Recursive call
    Printnum(n + 1);
}

int main() {
    int n = 1;
    Printnum(n);

    return 0;
}

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return ;
//     }

//     print(n-1);

//     cout<<n<<endl;
// }

// int main() {
//   int n=10;
//    print(n);

//     return 0;
// }
