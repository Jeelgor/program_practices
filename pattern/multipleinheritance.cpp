#include <iostream>
using namespace std;
class MultipleInheritance
{
public:
    int model;
    string NameofCar;
    void engine()
    {
        cout << "dharr....." << endl;
    }
};
class Defender : public virtual MultipleInheritance
{
public:
    int weight;
    int color;
    void Honk()
    {
        cout << "Honking" << endl;
    }
};
class Alto : public virtual Defender, public virtual MultipleInheritance
{
public:
    int gear;
    void alto()
    {
        cout << "Daboo" << endl;
    }
};
int main()
{
    Alto alt();

    return 0;
}

