#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1 ; j++)
        {
            cout << p--;
        }
        cout << endl;
    }
    return 0;
}