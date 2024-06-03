#include <iostream>

int main() {
    int num = 10;
    int rows = 4;

    for (int i = rows; i >= 1; --i) {
        for (int j = i; j <= rows; ++j) {
            std::cout << num-- << " ";
        }
        std::cout << std::endl;
        num = (i == rows - 1) ? 4 : num;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int num = 10;
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= n - i-1; j++) {
//             cout << num-- << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// /*
// 10 9 8 7
// 4 5 6
// 3 2
// 1
// */




