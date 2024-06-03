#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 4] Find the sum of all indices except the Current Index.
    // Input: [2, 4, 6]
    // Output: [10, 8, 6]
    // Justification:
    // 10: 4 + 6.
    // 8 : 2 + 6.
    // 6 : 2 + 4.
    int arr[] = {2, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> result(n);
    int totalsum = 0;
    for (int num : arr)
    {
        totalsum += num;
    }
    cout << "Total Sum" << totalsum << endl;

    for (int i = 0; i < n; i++)
    {
        result[i] = totalsum - arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}