#include <iostream>
using namespace std;
int fib(int n)
{
    int n1 = 0, n2 = 1, n3 = 0;
    if (n <= 1)
    {
        return 1;
    }
    cout << n1 << "," << n2 << ",";
    n3 = n1 + n2;
    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << ",";
    }
}
int main()
{
    int n = 10;
    int finalAns = fib(n);
    return 0;
}