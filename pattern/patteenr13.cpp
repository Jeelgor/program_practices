// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=n;j++)
//         {
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
//  return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<j+1;
//         }
//         cout<<endl;
//     }
//  return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=n;j++)
//         {
//             cout<<n-i;
//         }
//         cout<<endl;
//     }
//  return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<n-j;
//         }
//         cout<<endl;
//     }
//  return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<num++<<" ";
//         }
//         cout<<endl;
//     }
//  return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int num = 2;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << num << " ";
//             num += 2;
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
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << i * j << " ";
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
    int num = 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            cout << i << " ";
            i += num;
        }
        cout << endl;
    }
}