#include <iostream>
using namespace std;
bool primeNum(int n)
{
    if (n <= 1 || n==0)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (primeNum(n))
    {
        cout << n << "  is a prime number" << endl;
    }
    else
    {
        cout << n << "  Not prime number" << endl;
    }
    bool finalans = primeNum(n);
}


