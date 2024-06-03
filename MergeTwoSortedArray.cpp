#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> MeargAndremoveDupicate(vector<int> &arr1, vector<int> &arr2)
{
    set<int> merge_set;
    merge_set.insert(arr1.begin(), arr1.end());
    merge_set.insert(arr2.begin(), arr2.end());

    vector<int> MergArray(merge_set.begin(), merge_set.end());
    return MergArray;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {4, 5, 6, 7, 8}; 
    vector<int> mergArray = MeargAndremoveDupicate(arr1, arr2);

    for (int num : mergArray)
    {
        cout << num << " ";
    }
    return 0;
}