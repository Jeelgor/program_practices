#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Defaltu ca=onstructr A class" << endl;
       
    }
    ~A()
    {
         cout << " A Destructore" << endl;
    }
};
class B : A
{
public:
    B()
    {
        cout << "Default constructu b class" << endl;
    }
    ~B()
    {
        cout << " B Destructore" << endl;
    }
};
int main()
{

    B bobj;

    A Aobj;
    // 5] Find the longest SubString.
    // Input: "abcabcbb".
    // Output: 3 (abc).

    // Input: "bbbb".
    // Output: 1 (b).

    return 0;
}