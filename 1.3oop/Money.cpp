#include "Money.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void Money::setGrn(long value)
{
    grn = value;
}
void Money::setKop(unsigned char value)
{
    kop = value;
}
bool Money::Init(int x, int y)
{
    if (x >= 0 && y >= 0)
    {
        grn = x;
        kop = y;
        return true;
    }
    else {
        return false;
    }
}
void Money::Display() const
{
    cout << toString();
}
void Money::Read()
{
    int x, y;
    cout << "grn = ";
    cin >> x;
    do
    {
        cout << "cop = ";
        cin >> y;
    } while (!Init(x, y));
}
double Money::multiply(double number, Money f)
{
    double result;
    result = (f.change() * number) / 100;

    return result;
}
int Money::change()
{
    int sum = grn * 100 + kop;
    return sum;
}

bool ComparisionGreat(Money f, Money s)
{
    return f.change() > s.change();
}
bool ComparisionLess(Money f, Money s)
{
    return f.change() < s.change();
}

bool ComparisionEqual(Money f, Money s)
{
    return f.change() == s.change();
}
double Money::sub(Money f, Money s)
{
    double result = (f.change() - s.change() * 1.0) / 100;
    return result;
}

string Money::toString() const
{
    stringstream sout;

    int kops = kop;
    sout << "number = " << grn  << "," << kops << endl;
 
    return sout.str();
}