#include <iostream>

int main() {
    int num = 15;
    int row = 5;
    int count = 1;

    for (int i = 0; i < row; ++i) {
        if (i % 2 == 0) {
            // for even rows (0-indexed), print increasing sequence
            for (int j = 0; j <= i; ++j) {
                std::cout << num << " ";
                --num;
            }
        } else {
            // for odd rows, print decreasing sequence
            int temp = num - count;
            for (int j = 0; j <= i; ++j) {
                std::cout << temp << " ";
                ++temp;
                ++count;
            }
            num -= count;
        }
        std::cout << std::endl;
    }
    return 0;
}
