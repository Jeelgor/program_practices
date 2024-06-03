#include <iostream>
using namespace std;

void sumofdigit(int n, int &sum)
{
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n /= 10;
    sumofdigit(n, sum);

    cout << digit << " "; // Print the digit

    sum += digit;
}

int main()
{
    int n = 5625;
    int sum = 0;
    sumofdigit(n, sum);

    cout << endl
         << "Sum of digits: " << sum << endl;

    return 0;
}
