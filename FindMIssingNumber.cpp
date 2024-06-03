#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int n = (sizeof(arr) / sizeof(arr[0])) + 1;

    int sumwithoutmissing = (n * (n + 1)) / 2;

    int sumwithmissing = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sumwithmissing = sumwithmissing + arr[i];
    }

    int diff = sumwithoutmissing - sumwithmissing;

    cout << diff;
}