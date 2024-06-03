// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= n; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 10;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
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
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 5; j >= 1; j--)
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
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << num++ << " ";
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
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << i + j - 1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
int finalTotal(int n)
{
    if (n > 1)
    {
        return n + finalTotal(n - 1);
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n = 4;
    int l = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            l = finalTotal(i) - i + 1;
            for (int j = 1; j <= i; j++)
            {
                std::cout << l << " ";
                l++;
            }
        }
        else
        {
            l = finalTotal(i);
            for (int j = 1; j <= i; j++)
            {
                std::cout << l << " ";
                l--;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
