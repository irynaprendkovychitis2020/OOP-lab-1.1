#include "Number.h"
#include <iostream>

using namespace std;

void Number::SetFirst(int value)
{
    first = (int)value;
   
}
void Number::SetSecond(double value)
{
    second = (value - (int)value) * 100;
}
bool Number::Init(int x, double y)
{
    first = x;
    if (x >= 0)
    {
        second = y;
        return true;
    }
    else
    {
        second = 0;
        return false;
    }
}
void Number::Display() const
{
    cout << "first = " << first << " second = " << second << endl;
}
void Number::Read()
{
    int x, y;
    cout << "first = ? ";
    cin >> x;
    do {
        cout << "second = ?";
        cin >> y;
    } while (!Init(x, y));
}
void Number::multiply(double N)
{
    first *= N;
    second *= N;
}



