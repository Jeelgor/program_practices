// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // int num = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= n; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // int num = 1;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = n; j >= i; j--)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = i; j <= n; j++)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}