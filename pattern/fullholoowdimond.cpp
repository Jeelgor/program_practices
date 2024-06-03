#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Printing upward triangle
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Printing downward triangle
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}
