#include <iostream>
using namespace std;
int main()
{
    int t1 = 0, t2 = 1, t3 = 0, n;

    cout << "enter no to make upto fibonaci series ";
    cin >> n;

    cout << t1 << "," << t2;

    // certain number

    t3 = t1 + t2;

    for (int i = 3; i <= n; i++)
    {
        t3 = t1 + t2;
        cout << "," << t3;
        t1 = t2;
        t2 = t3;
    }
    return 0;
}