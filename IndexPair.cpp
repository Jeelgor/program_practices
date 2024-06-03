#include <iostream>
using namespace std;
int IndexPair(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << "," << j << endl;
            }
        }
    }
}
int main()
{
    // 2] Find the index of the Pair whose Sum is equal to the target value.
    // Input: [2, 4, 3, 7, 8] target = 9.
    // Output: [0, 3] (2+7 = target).
    int arr[] = {2, 4, 3, 7, 8};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    IndexPair(arr, n, target);
    return 0;
}