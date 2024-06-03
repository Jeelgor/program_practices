#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin(), 9);
    v.push_back(19);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}